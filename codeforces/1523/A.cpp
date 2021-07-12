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
template <typename T, typename U>
static inline void amin(T &x, U y)
{
    if (y < x)
        x = y;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    amin(m, n + 2);
    string s;
    cin >> s;
    for (int i = 0; i < m; ++i)
    {
        string t = s;
        for (int j = 0; j < n; ++j)
        {
            if (t[j] == '1')
                continue;
            if (t[j] == '0')
            {
                // debug(i,j);
                int cnt = 0;
                if (j - 1 >= 0 && t[j - 1] == '1')
                    ++cnt;
                if (j + 1 < n && t[j + 1] == '1')
                    ++cnt;
                if (cnt == 1)
                    s[j] = '1';
            }
        }
    }
    cout << s << "\n";
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