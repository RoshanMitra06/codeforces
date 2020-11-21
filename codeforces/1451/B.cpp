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
 int n,c;
 cin>>n>>c;
 string s;
 cin>>s;
 string ans="NO";
 for(int i=0;i<c;i++){
     ans="NO";
     int l,r;
     cin>>l>>r;
    for(int i=0;i<l-1;i++){
        if(s[i]==s[l-1]){
            ans="YES";
            break;
        }
    }
    for(int i=r;i<s.size();i++){
        if(s[i]==s[r-1]){
            ans="YES";
            break;
        }
    }
    cout<<ans<<endl;
 }  
 
} 
return 0;
   
}