#include<bits/stdc++.h>
using namespace std;
 
//keep coding
//-Roshan Mitra (SIT Pune) 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define f0(i,n) for(int i=0;i<n;i++) 
#define f1(i,n) for(int i=1;i<=n;i++)
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define pb push_back
#define MP make_pair
#define FF first
#define SS second
#define int long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
void factors(int n,vi &primes){
    while(n%2==0){
        primes.pb(2);
        n=n/2;
    }
    for(int i=3;i*i<=n;i++){
            while(n%i==0){
                primes.pb(i);
                n=n/i;
            }
    }
    if(n>2) primes.pb(n);
 }
signed main()
{
// OJ;
 FIO;
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vi primes;
 factors(n,primes);
 map<int,int>freq;
 int ans=0;
 //cout<<primes.size();
 for(auto &i:primes){
     freq[i]++;
   //  cout<<i<<" ";
    if(freq[i]>freq[ans]) ans=i;
 }
 int res=1;
 cout<<freq[ans]<<endl;
 for(int i=0;i<freq[ans]-1;i++){
     cout<<ans<<" ";
     res=res*ans;
 }
 cout<<n/res<<endl;

} 
return 0;
   
}