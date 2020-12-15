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
 
signed main()
{
 file();
 FIO;
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
    if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0'){
         cout<<"YES"<<endl;
         continue;
         }
    else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
        cout<<"YES"<<endl;
        continue;
    }
    else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0'){
        cout<<"YES"<<endl;
    continue;
    }
    else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
        cout<<"YES"<<endl;
        continue;
    }
    else if(s[0]=='2' && s[1]=='0' && s[2]=='2'&& s[n-1]=='0'){
        cout<<"YES"<<endl;
        continue;
    }
    else{
        cout<<"NO"<<endl;
    }

 
} 
return 0;
   
}