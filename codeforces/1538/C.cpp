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
#define FIO                           \
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
//finding upper and lower bounds and subtracting the two to get res
int upper(vector<int> &v, int start, int end, int r, int l, int val)
{
    int ans = -1;
    while (start <= end)
    {
        int m = (start + end) >> 1;
        if (v[m] + val >= l and v[m] + val <= r)
        {
            ans = m;
            start = m + 1;
        }
        else if (v[m] + val < r)
            start = m + 1;
        else if (v[m] + val > r)
            end = m - 1;
    }
    return ans;
}
int lower(vector<int> &v, int start, int end, int l, int r, int val)
{
    int ans = -1;
    while (start <= end)
    {
        int m = (start + end) >> 1;
        if (v[m] + val >= l and v[m] + val <= r)
        {
            ans = m;
            end = m - 1;
        }
        else if (v[m] + val < l)
            start = m + 1;

        else if (v[m] + val > l)
            end = m - 1;
    }
    return ans;
}
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vi v(n);
    f0(i, n) cin >> v[i];
    int res = 0;
    sort(all(v));
    for (int i = 0; i < n - 1; i++)
    {
        int c1 = upper(v, i + 1, n - 1, r, l, v[i]);
        // auto c1 = upper_bound(v.begin() + i, v.end(), v[i] + l);
        // auto c2 = lower_bound(v.begin() + i, v.end(), v[i] + r);
        int c2 = lower(v, i + 1, n - 1, l, r, v[i]);

        //cout << c1 << " " << c2 << endl;
        if (c1 != -1 and c2 != -1)
        {
            res += c1 - c2 + 1;
        }
    }
    cout << res << endl;
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