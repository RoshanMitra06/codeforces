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
// OJ;
 FIO;
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vi v(n),vu;
 map<int,int>freq;
 f0(i,n)
    cin>>v[i];
    f0(i,n){
        if(vu.empty()|| vu.back()!=v[i])
            vu.pb(v[i]);
    }

for(auto &i:vu)
    freq[i]++;

 int ans=INT_MAX;

 for(auto &x:vu){
     int res=freq[x]+1;
     if(x==vu.front()) res--;
     if(x==vu.back()) res--;
     ans=min(ans,res);
 }
 cout<<ans<<endl;
 
} 
return 0;
   
}