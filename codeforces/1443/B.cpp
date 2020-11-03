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
 
int a,b,dp[100005][2],n; 
string s;
int sax(int ind,int boom){
    if(ind==n)
        return boom?a:0;
    if(dp[ind][boom]!=-1)
        return dp[ind][boom];
    if(boom){
        if(s[ind]=='1'){
            return dp[ind][boom]=sax(ind+1,boom);
        }
        else{
            return dp[ind][boom]=min(a+sax(ind+1,0),b+sax(ind+1,1));
        }
    }
    else{
        if(s[ind]=='1'){
            return dp[ind][boom]=sax(ind+1,1);
        }
        else{
            return dp[ind][boom]=sax(ind+1,0);
        }
    }
}
signed main()
{
 FIO;
int t;
cin>>t;
while(t--){
 cin>>a>>b;
 cin>>s;
 n=s.size();
 for(int i=0;i<100005;i++){
     for(int j=0;j<2;j++)
        dp[i][j]=-1;
 }
cout<<sax(0,0)<<endl;
 
} 
return 0;
   
}