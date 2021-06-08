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

void solve()
{
  int n;
  cin >> n;
  vi v(n);
  f0(i, n) cin >> v[i];

  int l = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i] >= i)
      l = i;
    else
      break;
  }
  int r = n, j = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    if (v[i] >= j)
    {
      j++;
      r = i;
    }
    else
      break;
  }
  if (r <= l)
    cout << "Yes\n";
  else
    cout << "No\n";
}
signed main()
{
  file();
  FIO;
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}