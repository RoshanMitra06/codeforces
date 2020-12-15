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
  if(n>45){
      cout<<"-1\n";
      return;
  }
  string s;
  for(int i=9;i>0;i--){
        if(n<=9 && n<=i){
            s+=to_string(n);
             n=0;
             break;
        }
        else{
             s+=to_string(i);
             n-=i;
           }
  }

  if(n!=0){
      cout<<-1<<endl;
      return;
  }
  reverse(all(s));
cout<<s<<endl;

}
signed main()
{
 file();
 FIO;
int t;
cin>>t;
while(t--){
 solve();
} 
return 0;
   
}