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
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 for(int i=0;i<k;i++){
     if(s[i]=='?'){
     for(int j=i+k;j<n;j+=k){
         if(s[j]!='?'){
            s[i]=s[j];
            break;
         }
        }
     }
 }
 bool fl=0;
 for(int i=0;i<k;i++){
     if(s[i]!='?'){
         for(int j=i+k;j<n;j+=k){
             if(s[j]=='?')
                s[j]=s[i];
            else if(s[i]!=s[j]){
                cout<<"NO"<<endl;
                fl=1;
                break;
            }
         }
     }
 }
 if(fl!=1){
 int one=0,zero=0;
 for(int i=0;i<k;i++){
     if(s[i]=='1')
        one++;
    else if(s[i]=='0')
        zero++;
 }
 if(one<=k/2&&zero<=k/2)
    cout<<"YES"<<endl;
else   cout<<"NO"<<endl;
 }
 } 
return 0;
   
}