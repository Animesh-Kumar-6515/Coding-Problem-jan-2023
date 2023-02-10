#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100001],b[100001],n,m;
void solve() {
   cin >> n;
    // int a[n];
   for(int i=1;i<=n;++i) cin >> a[i];
    // int m;
   cin >> m;
   // int b[m];
   for(int i=1;i<=m;++i) cin >> b[i];
   int sa=0;
int front[n];
    front[0]=0;
    vector<int>back;
    back.push_back(1);
    int xin=0;
   for(int i=1,s=0;i<=n;++i) {
    if(xin<1){
      s+=a[i];
      sa=max(sa,s);
  }
  else{
    return;
  }
   }
   for(int i=n,s=0;i>=0;--i) {
      s+=a[i];
      if(xin<1){
        sa=max(sa,s);
      }
   }
   for(int i=1;i<=m;++i){
      if(b[i]>=0) 
        {
            sa+=b[i];
        }
   }
   cout << sa << endl;
    
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}