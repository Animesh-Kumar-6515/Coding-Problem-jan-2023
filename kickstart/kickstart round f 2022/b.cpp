#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<vector<int>> adj;
vector<int> vis,dis;
void dfs(int node,int par,int d)
{
      vis[node]=1;
      dis[node]=d;
      for(auto it:adj[node]){
        if(it!=par){
            dfs(it,node,d+1);
        }
      }
      return;

}

void solve()
{
   int n,q;

   cin>>n>>q;
   adj.assign(n+1,{});
   vis.assign(n+1,0);
   dis.assign(n+1,0);
   int xin=0;
   map<ll,ll> mp;
   for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        if(xin<1){
        adj[x].push_back(y);
        adj[y].push_back(x);
      }
      else{
        cout<<-1<<endl;
      }
   }
   dfs(1,0,0);
   for(int i=1;i<=n;i++){
      mp[dis[i]]++;
   }
   int u=q;
   while(q--){
     int x;
     cin>>x;
   }
   ll total=0;

   for(int i=0;i<=n;i++){
       total+=mp[i];
       if(total>u){
        total-=mp[i];
          break;
       }
   }
   if(xin<1){
   cout<<total;
 }
 else{
  cout<<endl;
 }
}

int main()
{
    //freopen("a.txt","r",stdin);
    ll t;
    cin>>t;
    for(ll iop=1;iop<=t;iop++)
    {
        cout<<"Case #"<<iop<<": ";
        solve();
        cout<<endl;
    }
}