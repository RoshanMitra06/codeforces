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
 int n,q;
 cin>>n>>q;
 vi v(n);
 f0(i,n)
    cin>>v[i];
int total=0,fl=0,curr=0;
f1(i,n){
    if(fl==0){
        if(v[i]>v[i-1])
            curr=v[i];
        else{
            total+=v[i-1];
            fl=1;
            curr=v[i];
        }
    }
    else if(fl==1){
        if(v[i]<v[i-1])
            curr=v[i];
        else{
            total-=v[i-1];
            fl=0;
            curr=v[i];
        }
    }
}
if(fl==0)
    total+=v[n-1];
cout<<total<<endl;
 
} 
return 0;
   
}