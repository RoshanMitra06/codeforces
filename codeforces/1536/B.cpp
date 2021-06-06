#include <bits/stdc++.h>
using namespace std;

// Athor : Roshan Mitra 😎
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
vector<char> check;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<char> se;
  f0(i, n) se.insert(s[i]);
  // for (auto i : se)
  //   cout << i << " ";
  // cout << 1;
  for (char c = 'a'; c <= 'z'; c++)
  {
    if (se.count(c) != 1)
    {
      cout << c << endl;
      rr;
    }
  }

  deque<string> dq;
  for (auto &it : check)
  {
    string t = "";
    t += it;
    dq.push_back(t);
  }
  while (dq.size() > 0)
  {
    string t = "";
    t += dq.front();
    dq.pop_front();
    for (char c = 'a'; c <= 'z'; c++)
    {
      string t1 = "";
      t1 += t;
      t1 += c;
      //cout << t1 << endl;
      if (s.find(t1) == string::npos)
      {
        cout << t1 << endl;
        rr;
      }
      if (t1.size() <= s.size())
        dq.push_back(t1);
    }
  }
}
signed main()
{
  file();
  FIO;
  for (int i = 'a'; i <= 'z'; i++)
    check.pb(i);
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}