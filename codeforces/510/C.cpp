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

//4 dir
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
//8 dir
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};
stack<int> st;
vector<bool> vis(27, 0);
vector<int> adj[27];
void toposort(int node, set<int> dup)
{

  vis[node] = 1;
  dup.insert(node);
  for (auto it : adj[node])
  {
    if (dup.count(it))
    {
      cout << "Impossible\n";
      exit(0);
    }
    if (!vis[it])
      toposort(it, dup);
  }

  st.push(node + 'a');
}

void solve()
{
  int n;
  cin >> n;
  vector<string> v;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    v.pb(s);
  }
  //z y x w v u t s r q p o n m l k j i h g f e d c b a
  for (int i = 1; i < n; i++)
  {
    string x = v[i - 1];
    string y = v[i];
    f0(j, x.size())
    {
      if (j == y.size())
      {
        cout << "Impossible\n";
        return;
      }
      else
      {
        if (x[j] != y[j])
        {
          adj[x[j] - 'a'].pb(y[j] - 'a');
          break;
        }
      }
    }
  }

  for (int i = 0; i < 26; i++)
  {
    if (!vis[i])
    {
      set<int> dup;
      toposort(i, dup);
    }
  }

  while (!st.empty())
  {
    cout << ((char)st.top());
    st.pop();
  }
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