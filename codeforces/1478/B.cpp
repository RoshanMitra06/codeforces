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
 bool yo(int a,int d){
     while(a){
         if(a%10==d) return true;
         a/=10;
     }
     return false;
 }
 void solve(){
 int n,d;
 cin>>n>>d;
 vi v(n);
 f0(i,n) cin>>v[i];
 int c=0;
 f0(i,n){
     c=0;
     if(v[i]%d==0){
         cout<<"YES\n";
         continue;
     }
     while(true){
         if(yo(v[i],d)){
            // cout<<v[i]<<endl;
             c=1;
             break;
         }
         else if(v[i]-d<=0){
             break;
         }
         v[i]-=d;
     }
     if(c) cout<<"YES\n";
     else cout<<"NO\n";
 }
}
signed main()
{
 file();
 FIO;
int t=1;
cin>>t;
while(t--){
 solve();
} 
return 0;
   
}