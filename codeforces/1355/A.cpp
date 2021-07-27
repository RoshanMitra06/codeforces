// Author : Roshan Mitra 😎
// Language: C++
// College: Symbiosis Institute Of Technology
// Practice is the only key to success
// Always push ur limits

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef pair<int, int> pii;
#define endl "\n"
#define set_bits(a) __builtin_popcountll(a)
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define inf 1 << 31
#define rev(arr) reverse(arr.begin(), arr.end())
#define asc(v) v.begin(), v.end()
#define des(v) v.end(), v.begin()
#define all(v) v.begin(), v.end()
#define pb push_back
const int mx = 1e5 + 5;
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
#define lowb(a, x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

/*/-----------------------------INLINE FUNCTIONS----------------------------------/*/
inline int ceil(int num, int den) { return ((num + den - 1) / den); }
/*/-------------------------------------------------------------------------------/*/

//4 dir
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
//8 dir
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};

/*/-----------------------------CODE BEGINS----------------------------------/*/
pair<int, int> minmax(int n)
{
    int mini = INT_MAX, maxi = INT_MIN;
    while (n)
    {
        mini = min(mini, n % 10);
        maxi = max(maxi, n % 10);
        n /= 10;
    }
    rr{mini, maxi};
}
void solve()
{
    int n, k;
    cin >> n >> k;
    k--;
    int ans = n;
    while (k--)
    {
        auto i = minmax(ans);
        int mini = i.ff, maxi = i.ss;
        //cout << mini << " " << maxi << endl;
        if (mini == 0)
        {
            break;
        }
        ans = ans + (mini * maxi);
    }
    cout << ans << endl;
}
/*/-----------------------------CODE ENDS------------------------------------/*/
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