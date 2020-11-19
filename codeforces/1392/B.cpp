#include<bits/stdc++.h>
using namespace std;
 
//keep coding
//-Roshan Mitra (SIT Pune) 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define f0(i,n) for(int i=0;i<n;i++) 
#define f1(i,n) for(int i=1;i<=n;i++)
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define pb push_back
#define MP make_pair
#define FF first
#define SS second
#define int long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
signed main()
{
 //OJ;
 FIO;
int t;
cin>>t;
while(t--){
 int n,k;
 cin>>n>>k;
 int arr[n],arr1[n];
 f0(i,n)
    cin>>arr[i];
 int maxi=*max_element(arr,arr+n);
 f0(i,n){
     arr[i]=maxi-arr[i];
     //arr[i]=-arr[i];
 }
 maxi=*max_element(arr,arr+n);
 f0(i,n)
    arr1[i]=maxi-arr[i];
if(k%2==1){
 f0(i,n)
    cout<<arr[i]<<" ";
    cout<<endl;
}
else{
    f0(i,n)
        cout<<arr1[i]<<" ";
    cout<<endl;

}
} 
return 0;
   
}