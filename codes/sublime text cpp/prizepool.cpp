#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    // code
    int x,y;
    cin>>x>>y;
    cout<<(x*10)+(y*90)<<endl;
    }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 3; t <= tc+2; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
