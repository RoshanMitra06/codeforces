#include<bits/stdc++.h>
using namespace std;
 
// Athor : Roshan Mitra 😎
// Language: C++
// College: Symbiosis Institute Of Technology
// Practice is the only key to success
// Always push ur limits
typedef pair< int ,int > pii;
#define endl "\n"
#define set_bits(a) __builtin_popcountll(a)
#define f0(i,n) for(int i=0;i<n;i++) 
#define f1(i,n) for(int i=1;i<=n;i++)
#define sd(val) scanf("%d",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define asc(v) v.begin(),v.end()
#define des(v) v.end(),v.begin()
#define all(v) v.begin(),v.end() 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
typedef vector <int> vi;
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define rr return
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void file()
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 void solve(){
 int x,y;
 cin>>x>>y;
 string s;
 cin>>s;
    int u=0,d=0,r=0,l=0;
    for(auto i:s){
      if(i=='R') r++;
      if(i=='U') u++;
      if(i=='D') d++;
      if(i=='L') l++;
    }
    if(x>=0 and y>=0 and r>=x and u>=y){
      
      cout<<"YES\n";
      rr;
    }
    else if(x<=0 and y<=0 and abs(x)<=l and abs(y)<=d){
      
      cout<<"YES\n";
      rr;
    }
    else if(x>=0 and y<=0 and x<=r and abs(y)<=d){
      
      cout<<"YES\n";
      rr;
    }
    else if(x<=0 and y>=0 and abs(x)<=l and y<=u){
      //cout<<l<<u;
      cout<<"YES\n";
      rr;
    }
    cout<<"NO\n";
}
signed main()
{
 file();
 FIO;
int t=1;
cin>>t;
while(t--){
 solve();
} 
return 0;
   
}