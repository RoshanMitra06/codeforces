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
 
 
signed main()
{
 //OJ;
 FIO;
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vi v(2*n),v1,v2;
 f0(i,2*n){
    cin>>v[i];
    if(v[i]%2==0)
        v2.pb(i+1);
    else v1.pb(i+1);
 }
//  for(auto &i:v2)
//     cout<<i<<" ";
 vector<pii> p;
 for(int i=0;i+1<v1.size();i+=2){
     p.pb(MP(v1[i],v1[i+1]));
 }
 for(int i=0;i+1<v2.size();i+=2){
     p.pb(MP(v2[i],v2[i+1]));
 }
 for(int i=0;i<n-1;i++){
     cout<<p[i].FF<<" "<<p[i].SS<<endl;
 }

 
} 
return 0;
   
}