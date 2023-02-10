#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;
typedef long long ll;
typedef long long int lli;

#define arrsize 100001
#define dpsize 1001
#define vpp vector<PP>
#define vll vector<ll>
#define vvll vector<vll>
#define vcc vector<char>
#define endl "\n"
#define vbb vector<bool>
#define w(t) while(t--)
#define PP pair<ll,ll>
#define test(x) ll t; cin>>t; w(t) x()
#define __lb lower_bound
#define __ub upper_bound
#define szs(x) x.length()
#define szv(x) x.size()
#define INF 1999999996000000010
#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define ef(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define mem(arr) memset(arr,-1,sizeof(arr));
#define rsz(x,n) x.resize(n)
#define rsr(x,n) x.reserve(n) 
#define float long long double
#define pb push_back
#define print(arr,s,e) f(i,s,e) cout<<arr[i]<<" "; cout<<endl;
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define vll vector<ll>
#define triplet pair<ll,pair<ll,ll> >
#define MITR(a,b) map<a,b>::reverse_iterator 
#define dbg(x)              cout<<#x<<"="<<(x)<<endl;
#define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;

// Operator overloads <<, >>
template<typename T1, typename T2> // cin >> pair
istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector
istream &operator>>(istream &istream, vector<T> &v) { for (auto &it : v) { cin >> it; } return istream; }
template<typename T1, typename T2> // cout << pair
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector
ostream &operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) { cout << it << " "; } return ostream; }

lli M=1000000007;
lli min(lli a,lli b) { if(a<b) return a; return b;}
lli max(lli a,lli b) { return (a>b)?a:b;}
lli modexpo(lli a,lli b){
    lli res = 1;
    while(b>0){
      if(b&1) res = (res*a)%M;
      a = (a*a)%M;
      b/=2;
    }
    return res;
} 
struct custom_hash{
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve(){
    ll n,k; cin>>n>>k;
    vll arr(n);
    takeINP(arr,n);
    ll ans=0;
    f(i,0,n){
        ans+=arr[i]/k;
        arr[i]=arr[i]%k;
    }
    multiset<ll> st(all(arr));
    sort(all(arr));
    f(i,0,n){
        ll tmp=k-arr[i];
        if(st.find(arr[i])!=st.end()){
            st.erase(st.find(arr[i]));
            auto t=st.lower_bound(tmp);
            // if(t!=st.end() && )
            if(t!=st.end()){
                ll val=(*t);
                st.erase(st.find(val));
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    // sieve();
    int t=1;
    cin>>t;
    while(t--) solve();
    // for(int i=0;i<t;i++){
    //     cout<<"Case #"<<i+1<<": ";
    //     solve();
    // }
    return 0;
}