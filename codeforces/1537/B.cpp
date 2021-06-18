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

void solve()
{
  int n, m, i, j;
  cin >> n >> m >> i >> j;
  // if (i < j)
  // {
  //   cout << i + (n - i) << " " << 1 << " " << i + (n - i) << " " << m << endl;
  //   // cout << "hello";
  // }
  // else
  // {
  //   cout << 1 << " " << j + (m - j) << " " << n << " " << 1 << endl;
  // }
  int ind1 = abs(i - n) + abs(j - m) + abs(i - 1) + abs(j - 1);
  int ind2 = abs(i - n) + abs(j - 1) + abs(i - 1) + abs(j - m);
  if (ind2 > ind1)
  {
    cout << 1 << " " << m << " " << n << " " << 1 << endl;
  }
  else
    cout << 1 << " " << m << " " << n << " " << 1 << endl;
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