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
 int pre1[100002];
 int pre2[100002];
 void prefix(vi temp){
     clr(pre1);
     for(int i=0;i<temp.size();i++){
         if(i!=0) pre1[i]=pre1[i-1]+temp[i];
         else pre1[i]=temp[i];
     }
 }
 void prefix1(vi temp){
     clr(pre2);
    for(int i=0;i<temp.size();i++){
         if(i!=0) pre2[i]=pre2[i-1]+temp[i];
         else pre2[i]=temp[i];
     }
 }
 void solve(){
    int n;
    cin>>n;
    vi v(n+1);
    f1(i,n) cin>>v[i];
    prefix(v);
    vi temp(n+1);
    temp=v;
    sort(all(temp));
    prefix1(temp);
    //for(int i=1;i<=n;i++) cout<<pre2[i]<<endl;
    int q;
    cin>>q;
        while(q--){
            int x;
            cin>>x;
            if(x==1){
                int l,r;
                cin>>l>>r;
                if(l==1) cout<<pre1[r]<<endl;
                else cout<<pre1[r]-pre1[l-1]<<endl;
            }
            else if(x==2){
                int l,r;
                cin>>l>>r;
                if(l==1) cout<<pre2[r]<<endl;
                else cout<<pre2[r]-pre2[l-1]<<endl;
            }
        }
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