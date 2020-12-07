#include<bits/stdc++.h>
using namespace std;
 
// Athor : Roshan Mitra 
// Language: C++
// College: Symbiosis Institute Of Technology
//Practice is the only key to success
typedef pair< int ,int > pii;
#define endl "\n"
#define set_bits(a) __builtin_popcountll(a)
#define f0(i,n) for(int i=0;i<n;i++) 
#define f1(i,n) for(int i=1;i<=n;i++)
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define int long long
typedef vector <int> vi;
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 vector<int>adj[1000005];
 vector<int>color(1000005);
 vector<int>vis(1000005);
 bool fl=true;
 void bipartite(int node,int par,int col){
     vis[node]=1;
     color[node]=col;
     for(auto it:adj[node]){
         if(!vis[it]){
             bipartite(it,node,!col);
         }
         if(it!=par && color[it]==color[node]){
             fl=false;
         }
     }
 }
signed main()
{

 FIO;
int t=1;
//cin>>t;
while(t--){
 int n,m;
 cin>>n>>m;
 vector<pair<int,int>>edges;
 f0(i,m){
     int u,v;
     cin>>u>>v;
     edges.pb({u,v});
     adj[u].pb(v);
     adj[v].pb(u);
 }
 bipartite(1,0,1);
 if(!fl){
     cout<<"NO\n";
 }
 else{
     cout<<"YES\n";
     for(auto it:edges){
         if(color[it.fi]==1)
         cout<<1;
         else cout<<0;
     }
     cout<<endl;
 }
} 
return 0;
   
}