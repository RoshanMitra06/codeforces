#include<bits/stdc++.h>
using namespace std;
 
// Athor : Roshan Mitra 😎
// Language: C++
// College: Symbiosis Institute Of Technology
// Practice is the only key to success
// Always push ur limits
typedef pair< int ,int > pii;
#define endl "\n"
#define set_bits(a) __builtin_popcountll(a)
#define f0(i,n) for(int i=0;i<n;i++) 
#define f1(i,n) for(int i=1;i<=n;i++)
#define sd(val) scanf("%d",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define asc(v) v.begin(),v.end()
#define des(v) v.end(),v.begin()
#define all(v) v.begin(),v.end() 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
typedef vector <int> vi;
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define rr return
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void file()
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 void solve(){
    int n;
    cin>>n;
    vi v(n);
    f0(i,n) cin>>v[i];
    
    vector<int>c[100001];
    f0(i,n){
        c[v[i]].push_back(i);
    }
    set<pii>s;
    for(int i=0;i<100001;i++){
        if(c[i].size()==0) continue;
        if(c[i].size()==1) s.insert({i,0});

        else{
            int f=0;
            int d=c[i][1]-c[i][0];
            for(int j=2;j<c[i].size();j++){
                if(d!=c[i][j]-c[i][j-1]){
                    f=1;
                    break;
                }
            }
            if(!f) s.insert({i,d});
        } 
    }
    cout<<s.size()<<endl;
    for(auto i:s) cout<<i.ff<<" "<<i.ss<<endl;

}
signed main()
{
 file();
 FIO;
int t=1;
//cin>>t;
while(t--){
 solve();
} 
return 0;
   
}