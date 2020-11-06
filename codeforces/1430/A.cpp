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
 
 void solve(){
     int n;
 cin>>n;
 int fl=0;
 if(n==1 || n==2 || n==4)
    cout<<-1<<endl;
else if(n%3==0)
    cout<<n/3<<" "<<0<<" "<<0<<endl;
else if(n%5==0)
    cout<<0<<" "<<n/5<<" "<<0<<endl;
else if(n%7==0)
    cout<<0<<" "<<0<<" "<<n/7<<endl;
else{
    for(int i=0;i<n;i++){
        int a=7*i;
        for(int j=0;j<n;j++){
            int b=5*j;
            if(n-a-b>0 && (n-a-b)%3==0){
                cout<<(n-a-b)/3<<" "<<j<<" "<<i<<endl;
                fl=1;
                return;
            }
        }
    }
    cout<<-1<<endl;

    }
 }
signed main()
{

 FIO;
int t;
cin>>t;
while(t--){
solve();
}    
return 0;
   
}