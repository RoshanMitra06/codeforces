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
 int n,k;
 cin>>n>>k;
 if(n==2){
     cout<<"1 1 0"<<endl;
     rr;
 }
 if(n%2){
     int a=n-1;
     cout<<"1 "<<a/2<<" "<<a/2<<endl;
     rr;
 }
 else{
     int a=n/2;
     if(a%2!=0){
         cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
     }
     else{
         cout<<a<<" "<<a/2<<" "<<a/2<<endl;
     }
 }
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