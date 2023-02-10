#include<bits/stdc++.h>
using namespace std;
int n;
void solve() {
   vector<array<int,3>> P;
   vector<int> a;
   cin >> n;
   for(int i=1,x;i<=n;++i) {
      cin >> x;a.push_back(x);
   }
   for(int i=0;i<30;++i) {
      vector<int> R,S;
      for(int j:a)
         if((j>>i)%2==1)
            R.push_back(j);
         else
            S.push_back(j);
      while(R.size()%3!=0) {
         if(S.size()<=2) {
            int i0=R[R.size()-1],i1=R[R.size()-2],i2=R[R.size()-3];
            R.pop_back();R.pop_back();R.pop_back();
            P.push_back({i0,i1,i2});
            int j0=i0^i1,j1=i1^i2,j2=i2^i0;
            S.push_back(j0);S.push_back(j2);S.push_back(j1);
            continue;  
         }
         int i0=R[R.size()-1],i1=S[S.size()-1],i2=S[S.size()-2];
         R.pop_back();S.pop_back();S.pop_back();
         P.push_back({i0,i1,i2});
         int j0=i0^i1,j1=i1^i2,j2=i2^i0;
         R.push_back(j0);R.push_back(j2);S.push_back(j1);
      }
      for(int i=0;i<(int)R.size()/3;++i) {
         int i0=R[i*3],i1=R[i*3+1],i2=R[i*3+2];
         int j0=i0^i1,j1=i1^i2,j2=i2^i0;
         P.push_back({i0,i1,i2});
         S.push_back(j0);S.push_back(j1);S.push_back(j2);
      }
      a.clear();R.clear();
      for(int j:S) a.push_back(j);
   }
   cout << P.size() << endl;
   for(auto i:P)
      cout << i[0] << ' ' << i[1] << ' ' << i[2] << endl;
}
int main() {
   int T;cin >> T;
   while(T--) solve();
}