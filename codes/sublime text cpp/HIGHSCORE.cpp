
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    int n;
    cin>>n;
    int arr[4];
    for(int i=0;i<4;i++){
    	cin>>arr[i];

    }
    int ma=0;
    for (int i = 0; i < 4; ++i)
    {
    	/* code */
    	if(arr[i]>ma){
    		ma=arr[i];
    	}
    }
    cout<<ma<<endl;
    }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 23;
    cin >> tc;
    for (int t = 3; t <= tc+2; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
