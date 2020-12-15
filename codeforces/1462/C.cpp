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
 void solve(int n){
int arr[]={1,2,3,4,5,6,7,8,9};
 bool fl=0;
 if(n<10){
     cout<<n<<endl;
     return;
 }
else if(n>9 && n<=17){
    for(int i=0;i<9;i++){
        for(int j=1;j<9;j++){
            if(arr[i]+arr[j]==n){
                cout<<arr[i]<<""<<arr[j]<<endl;
                return;
            }
        }
    }
}
else if(n>17 && n<=24){
    for(int i=0;i<9;i++){
        if(arr[i]+17==n){
            cout<<arr[i]<<"89\n";
            return;
        }
    }
}
else if(n>24 && n<=30){
       for(int i=0;i<9;i++){
            if(arr[i]+24==n){
            cout<<arr[i]<<"789\n";
            return;
        }
    } 
}
else if(n>30 && n<36){
        for(int i=0;i<9;i++){
            if(arr[i]+30==n){
                cout<<arr[i]<<"6789\n";
            return;
        }
    } 
}
else if(n>35 && n<=39){
        for(int i=0;i<9;i++){
            if(arr[i]+35==n){
                cout<<arr[i]<<"56789\n";
            return;
        }
    } 
}
else if(n>39 && n<=42){
        for(int i=0;i<9;i++){
            if(arr[i]+39==n){
                cout<<arr[i]<<"456789\n";
            return;
        }
    } 
}
else if(n>45){
    cout<<-1<<endl;
    return;
}
else if(n==45){
    cout<<123456789<<endl;
    return;
}
else if(n==44){
    cout<<23456789<<endl;
    return;
}
else if(n==43){
    cout<<13456789<<endl;
    return;
}

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
 solve(n);
}
}