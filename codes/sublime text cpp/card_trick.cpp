#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    	// sum=sum+arr[i];
    }
    ll m;
    cin>>m;
    ll mar[n];
    ll sum=0;
    for(ll i=0;i<m;i++){
    	cin>>mar[i];
    	sum=sum+mar[i];

    }
    // sum=accumulate(mar,mar+m,0);
    // cout<<"sum "<<sum<<endl;
    ll x=sum%n;
    // cout<<x<<endl;
    cout<<arr[x]<<endl;

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
