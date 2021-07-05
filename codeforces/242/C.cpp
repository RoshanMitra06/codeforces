#include <bits/stdc++.h>
using namespace std;

// Author : Roshan Mitra 😎
// Language: C++
// College: Symbiosis Institute Of Technology
// Practice is the only key to success
// Always push ur limits
typedef pair<int, int> pii;
#define endl "\n"
#define set_bits(a) __builtin_popcountll(a)
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define sd(val) scanf("%d", &val)
#define sl(val) scanf("%lld", &val)
#define debug(val) printf("check%d\n", val)
#define asc(v) v.begin(), v.end()
#define des(v) v.end(), v.begin()
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
typedef vector<int> vi;
#define MOD 1000000007
#define clr(val) memset(val, 0, sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define rr return
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
void file()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

//dx dy
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};

map<pair<int, int>, int> mpp;
map<pair<int, int>, int> vis;
void solve()
{
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int n;
  cin >> n;
  while (n--)
  {
    int r, c1, c2;
    cin >> r >> c1 >> c2;
    for (int i = c1; i <= c2; i++)
      mpp[{r, i}]++;
  }
  vis[{x1, y1}] = 1;
  queue<pair<pair<int, int>, int>> q;
  q.push({{x1, y1}, 0});
  while (!q.empty())
  {
    auto it = q.front();
    q.pop();
    int x = it.ff.ff;
    int y = it.ff.ss;
    int steps = it.ss;
    for (int i = 0; i < 8; i++)
    {
      int newx = x + XX[i];
      int newy = y + YY[i];

      if (!vis[{newx, newy}] and mpp[{newx, newy}])
      {
        // cout << newx << " " << newy << endl;
        if (newx == x2 and newy == y2)
        {

          cout << steps + 1 << endl;
          rr;
        }
        q.push({{newx, newy}, steps + 1});
        vis[{newx, newy}] = 1;
      }
    }
  }
  cout << -1 << endl;
}
signed main()
{
  file();
  FIO;
  int t = 1;
  //cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}