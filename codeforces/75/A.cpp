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
     int a,b;
     cin>>a>>b;
     int ans=a+b;
     string s1=to_string(a);
     string s2=to_string(b);
     string an=to_string(ans);
     string temps1,temps2,tempans;
     for(int i=0;i<s1.size();i++){
         if(s1[i]!='0') temps1+=s1[i];
     }
            for(int i=0;i<s2.size();i++){
                if(s2[i]!='0') temps2+=s2[i];
             }
    for(int i=0;i<an.size();i++){
        if(an[i]!='0') tempans+=an[i];
    }
     int x=stoi(temps1);
     int y=stoi(temps2);
     int res=x+y;
     //cout<<res<<tempans;
     if(tempans==to_string(res)) cout<<"YES\n";
     else cout<<"NO\n";

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