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
 FIO;
int t;
cin>>t;
while(t--){
 int n,m=0;
 cin>>n;
 vi v(n);
 map<int,int>mpp;
 f0(i,n){
     cin>>v[i];
     mpp[v[i]]++;
    m=max(m,mpp[v[i]]);
 } 
 if(m==n){
     cout<<"NO\n";
     continue;
 }
 cout<<"YES\n";
 int sec=-1;
 for(int i=1;i<n;i++){
     if(v[i]!=v[0]){
         sec=i;
         break;
     }
 }
 for(int i=1;i<n;i++){
     if(v[i]!=v[0]){
         cout<<1<<" "<<i+1<<endl;
     }
     else{
         cout<<sec+1<<" "<<i+1<<endl;
     }
 }
 
} 
return 0;
   
}