#include<bits/stdc++.h>
using namespace std;
 
// Athor : Roshan Mitra 
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
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define int long long
typedef vector <int> vi;
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void file()
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 void solve(){
 int n,k;
 cin>>n>>k;
 vector<int>v(n+1);
 f1(i,n) cin>>v[i];
 int pre[n+1];
 memset(pre,0,sizeof(pre));
 for(int i=1;i<=n;i++){
     if(i!=0) pre[i]=pre[i-1]+v[i];
     else pre[i]=v[i];
 }
 //f0(i,n) cout<<pre[i]<<" ";
 int sum=INT_MAX,ind=-1;
 for(int i=k;i<=n;i++){
     if(pre[i]-pre[i-k]<=sum){
         sum=pre[i]-pre[i-k];
         //cout<<sum<<" "<<i-k+1<<endl;
         ind=i-k+1;
     }
 }
 cout<<ind<<endl;
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