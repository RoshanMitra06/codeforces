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
#define N 1000005
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
 bool prime[N];
 void seive(){
     memset(prime,true,sizeof(prime));
     prime[0]=prime[1]=false;
     for(int i=2;i<N;i++){
         if(prime[i]){
             for(int j=i*i;j<N;j+=i){
                 prime[j]=false;
             }
         }
     }
 }
 bool sq(int n){
     int i=sqrt(n);
     if(i*i==n) return true;
     else return false;
 }
 void solve(){
  int n;
  cin>>n;
  f0(i,n){
      int x;
      cin>>x;
      int p=sqrt(x);
      if(sq(x) && prime[p]) cout<<"YES\n";
      else cout<<"NO\n";
  }
}
signed main()
{
 file();
 FIO;
int t=1;
//cin>>t;
seive();
while(t--){
 solve();
} 
return 0;
   
}