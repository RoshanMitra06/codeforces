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
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void file()
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 bool check(string s,int mid){
     int one=0,two=0,three=0;
     for(int i=0;i<mid;i++){
         if(s[i]=='1') one++;
         else if(s[i]=='2') two++;
         else three++;
     }
     if(one && two && three) return true;
     int l=0;
     for(int i=mid;i<s.size();i++){
         if(s[i]=='1') one++;
         else if(s[i]=='2') two++;
         else three++;

         if(s[l]=='1') one--;
         else if(s[l]=='2') two--;
         else if(s[l]=='3') three--;
         l++;
         if(one && two && three) return true;
     }

     return false;
 }
 void solve(){
  string s;
  cin>>s;
  int n=s.size();
  int low=3,high=n,ans=0;
  while(low<=high){
      int mid=(low+high)/2;
      //cout<<low<<" "<<mid<<" "<<high<<endl;
      if(check(s,mid)){
          //cout<<"h"<<endl;
          ans=mid;
          high=mid-1;
      }else low=mid+1;
  }
  cout<<ans<<endl;
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