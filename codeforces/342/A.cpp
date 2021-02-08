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
 int n;
 cin>>n;
 int arr[8];
 clr(arr);
    f0(i,n) {
        int x;
        cin>>x;
        arr[x]++;
    }
    int m=n/3;
//vector<tuple<int,int,int>>vec;
int a=0,b=0,c=0;
    for(int i=0;i<m;i++){
        if(arr[1]>0 and arr[2]>0 and arr[4]>0){
            //cout<<1<<" "<<2<<" "<<4<<endl; 
            arr[1]--;
            arr[2]--;
            arr[4]--;
            a++;
        }
       else if(arr[1]>0 and arr[3]>0 and arr[6]>0){
            //cout<<1<<" "<<3<<" "<<6<<endl;
            arr[1]--;
            arr[3]--;
            arr[6]--;
            b++;
        }
        else if(arr[1]>0 and arr[2]>0 and arr[6]>0){
            //cout<<1<<" "<<2<<" "<<6<<endl;
            arr[1]--;
            arr[2]--;
            arr[6]--;
            c++;
        }
        else{
            cout<<-1<<endl;
            rr;
        }
    }
    while(a){
        cout<<1<<" "<<2<<" "<<4<<endl; 
        a--;
    }
    while(b){
        cout<<1<<" "<<3<<" "<<6<<endl;
        b--;
    }
    while(c){
        cout<<1<<" "<<2<<" "<<6<<endl;
        c--;
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