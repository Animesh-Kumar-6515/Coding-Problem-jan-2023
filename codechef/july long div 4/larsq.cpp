// [Forwarded from Nobita]
// ㅤ:
#include <bits/stdc++.h>
using namespace std;
#define ll long long  
#define pb push_back
#define F first
#define S second
typedef pair<ll, ll>    pl;
typedef vector<ll>      vl; 
typedef vector<pl>      vpl;
vpl v;
pl intersection(pl p1,pl p2)
{
    return {max(p1.F,p2.F),min(p1.S,p2.S )};
}
bool check(ll mid){
    // check that there exits a continuous seq of length mid and intersection mid
    int st=0,end=1;
    pl i=v[0];
    while(st<v.size()&&end<v.size()){
        pl temp=intersection(i,v[end]);
        if( temp.S-temp.F+1>=mid){
            i=temp;
            if(end-st+1>=mid)return 1;
            end++;
        }
        else {

            st++;
            i=v[st];
            end=st+1;
        }
    }

    return 0;

}
void solve(){
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }    
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    ll l=1,r=n;
    ll ans=1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid)){
            l=mid+1;
            ans=max(ans,mid);
        }
        else r=mid-1;
    }
    cout<<ans<<endl;

}
 
int main()
{
  #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    solve();
}

//LARSQR31