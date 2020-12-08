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
  map<pair<int,int>,int>mpp;
 vector<int>adj[100005];
 vector<int>dist(100005);
 vector<int>par(100005);
 const int inf = (int)(1e18 + 10);


 void dij(int src,int n){
    int dist[n+1];
     f1(i,n){
         dist[i]=inf;
         par[i]=i;
     }
     dist[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
     pq.push({dist[src],src});
     while(!pq.empty()){
         auto itr=pq.top();
         pq.pop();
         int dis=itr.fi; 
         int node=itr.se;
         for(auto it:adj[node]){
             if(dis+mpp[{it,node}]<dist[it]){
                 dist[it]=dis+mpp[{it,node}];
                 par[it]=node;
                 pq.push({dist[it],it});
             }
         }
     }
     int node=n;
     if(dist[node]==inf){
         cout<<"-1\n";
         return;
     }
     vector<int>path;
     path.pb(node);
     while(node!=1){
         node=par[node];
         path.pb(node);
     }
     reverse(all(path));
     for(auto it:path)
        cout<<it<<" ";
    cout<<endl;
 }
signed main()
{
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin); 
     freopen("output.txt", "w", stdout); 
#endif
 FIO;
int t=1;
//cin>>t;
while(t--){
 int n,m;
 cin>>n>>m;
 while(m--){
     int u,v,dist;
     cin>>u>>v>>dist;
     adj[u].pb(v);
     adj[v].pb(u);
     mpp[{u,v}]=dist;
     mpp[{v,u}]=dist;
 }
 dij(1,n);
 
} 
return 0;
   
}