#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,q,u,v;
void solve() {
    cin >> n >> q;
    for(int i=1;i<=q;++i) {
        cin >> u >> v;
        vector<pair<int,int>> U,V;
        for(int i=2;i*i<=u;++i) {
            int x=0;
            while(u%i==0) {
                u/=i;
                x++;
            }
            if(x!=0)
                U.push_back({i,x});
        }
        if(u!=1) U.push_back({u,1});
        for(int i=2;i*i<=v;++i) {
            int x=0;
            while(v%i==0) {
                v/=i;
                x++;
            }
            if(x!=0)
                V.push_back({i,x});
        }
        if(v!=1) V.push_back({v,1});
        U.push_back({2147483647,0});
        V.push_back({2147483647,0});
        reverse(U.begin(),U.end());
        reverse(V.begin(),V.end());
        int answer=0;
        while((U.size()>1)||(V.size()>1)) {
            if(U.back().first==V.back().first) {
                answer+=U.back().first*abs(U.back().second-V.back().second);
                U.pop_back();
                V.pop_back();
            }
            else if(U.back().first<V.back().first) {
                answer+=U.back().first*U.back().second;
                U.pop_back();
            } else {
                answer+=V.back().first*V.back().second;
                V.pop_back();
            }
        }
        cout << answer << endl;
    }
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}