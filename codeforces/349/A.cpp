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
 int n;
 cin>>n;
 int a=0,b=0,c=0;
 int sum=0;
 while(n--){
     int x;
     cin>>x;
     sum+=x;
     if(x==25) a++;
     if(x==50) b++;
     if(x==100) c++;
     if(x!=25){
         int diff=x-25;
        //cout<<a<<" "<<b<<" "<<c<<" "<<sum<<" "<<diff<<" "<<endl;
         if(a!=0 || b!=0 || c!=0){
             if(x!=100 && c>0 &&  diff>=100){
                 diff-=100;
                 c--;
             }
             if(x!=50 && b>0 && diff>=50){
                 diff-=50;
                 b--;
             }
             if(c>=diff/100 && diff%100==0){
                
                 sum-=diff;
                 c=(c-diff/100);
                 
             }
              if(b>=diff/50 && diff%50==0){
                 
                 sum-=diff;
                 b=(b-(diff/50));
                
             }
              if(a>=diff/25 && diff%25==0){
                 
                 sum-=diff;
                 a=a-diff/25;
                
             }
             else{
                 cout<<"NO\n";
                 return;
             }
         }else{
             cout<<"NO\n";
             return;
         }
     }

 }
 cout<<"YES\n";
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