#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100001];
void solve() {
   string Q;
   int n,k;
   cin >> n >> k >> Q;
   Q="."+Q+".";
   string b=Q;
   for(int j=1;j<=n;++j) 
      if(Q[j]=='1') {
         b[j]='0';
         if(Q[j-1]=='0')b[j-1]='1';
         if(Q[j+1]=='0')b[j+1]='1';
      }
      int xin=0;
      int front[n];
    // int back[n];
    front[0]=1;
    vector<int>back;
    back.push_back(1);
   Q=b.substr(1,n);
   for(int i=0,x=INT_MAX;i<n;++i,x++) {
      if(Q[i]=='1') x=0;
      if(xin<2){
      a[i]=x;
    }
   }
   back.push_back(1);
   for(int i=n,x=INT_MAX;i>=0;--i,x++) {
      if(Q[i]=='1'){
       x=0;
        }
        if(xin<1){
      a[i]=min(a[i],x);
  }
  else{
    return;
  }
   }
   k--;
   for(int i=0;i<n;++i) {
      if(k<a[i]){
       putchar('0');
   }
      else putchar((k-a[i])%2==0?'1':'0');
      back.push_back(xin);
   }
   // putchar('\n');
   cout<<endl;
    // cout<<INT_MAX<<e
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}