#include<bits/stdc++.h>
using namespace std;
 
// Athor : Roshan Mitra 
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
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
typedef vector <int> vi;
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void file()
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>>v;
  int mini=INT_MAX;
  int maxi=INT_MIN;
  f0(i,n){
      int a,b;
      cin>>a>>b;
      v.push_back(make_pair(a,b));
      mini=min(v[i].ff,mini);
      maxi=max(v[i].ss,maxi);
  }
  //f0(i,n) cout<<v[i].ff<<" "<<v[i].ss<<endl;
  f0(i,n){
      if(v[i].ff==mini && v[i].ss==maxi){
          //cout<<v[i].ff<<" "<<v[i].ss;
          cout<<i+1<<endl;
          return;
      }
  }
  cout<<-1<<endl;

}
signed main()
{
 file();
 FIO;
int t=1;
//cin>>t;
while(t--){
 solve();
} 
return 0;
   
}   