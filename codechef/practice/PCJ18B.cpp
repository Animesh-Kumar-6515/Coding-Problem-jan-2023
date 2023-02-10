#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;




void solve() {
	int n;
	cin>>n;
	
    int count = 0;

    for (int i = 1; i <= n; i = i + 2) {
 
        int k = n - i + 1;
        count += (k * k);
    }
    cout<<count<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}