#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    int n;
    cin>>n;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	if(arr[i]!=0){
    		flag=i;
    	}
    }
    cout<<flag<<endl;

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
