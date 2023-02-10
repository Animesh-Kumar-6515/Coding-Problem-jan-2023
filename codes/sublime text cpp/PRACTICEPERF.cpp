#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    // code
    int ar[4];
    int flag=0;
    for(int i=0;i<4;i++){
        cin>>ar[i];
        if(ar[i]>9){
            flag++;
        }
    }
    cout<<flag<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int tc;
    // cin >> tc;
    // for (int t = 3; t <= tc+2; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
// }
