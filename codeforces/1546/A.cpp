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
void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n), res(n), ar, br;
    int sum = 0;
    f0(i, n) cin >> a[i];
    f0(i, n) cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        res[i] = b[i] - a[i];
        sum += res[i];
    }
    if (sum != 0)
    {
        cout << -1 << endl;
        rr;
    }
    int i = 0, c = 0;
    while (i < n)
    {
        if (res[i] > 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                while (res[i] > 0 and res[j] < 0)
                {
                    res[i]--, res[j]++;
                    c++;
                    br.pb(i + 1);
                    ar.pb(j + 1);
                }
                if (res[i] == 0)
                    break;
            }
        }
        i++;
    }
    cout << c << endl;
    for (int i = 0; i < c; i++)
    {
        cout << ar[i] << " " << br[i] << endl;
    }
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