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
#define MOD 1000000009
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

void solve()
{
  string s, gb;
  cin >> s >> gb;
  int k;
  cin >> k;
  set<int> st;
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    int ans = 0;
    int p = 1;
    int bad = 0;
    for (int j = i; j < n; j++)
    {
      ans *= 29;
      //   ans %= MOD;
      ans += (s[j] - 'a' + 1);
      //   ans %= MOD;
      if (gb[s[j] - 'a'] == '0')
        bad++;
      if (bad > k)
        break;
      p = (p * 31) % MOD;
      st.insert(ans);
    }
  }
  cout << st.size() << endl;
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