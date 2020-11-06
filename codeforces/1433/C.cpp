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
 
 bool cmp(pair<int,int> p1,pair<int,int> p2){
     if(p1.first!=p2.first)
        return p1.first<p2.first;
    else p2.second>p1.second;
 }
signed main()
{

 FIO;
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vi v(n);
 int idx=-1,maxi=-1;
 f0(i,n){
    cin>>v[i];
 }
 maxi=*max_element(all(v));
 bool sab=false;
 f0(i,n){
     if(v[i]==v[0])
        sab=true;
    else{
        sab=false;
        break;
    }
 }
 int fl=0;
 if(sab){
    cout<<-1<<endl;
    fl=1;
 }
 if(!fl)
 f0(i,n){
     if(v[i]==maxi && i-1>=0 && v[i-1]<maxi){
         cout<<i+1<<endl;
         break;
     }
     else if(v[i]==maxi && i+1<n && v[i+1]<maxi){
         cout<<i+1<<endl;
         break;
     }
 }
} 
return 0;
   
}