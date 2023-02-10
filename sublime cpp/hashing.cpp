#include <bits/stdc++.h>

using namespace std;





int main() {
    
    long long sum=0;
    int n;
    cin>>n;
    int ar[100];
    int arr[100];
    for (int i=1;i<=n;i++){
    	cin>>ar[i];
    	arr[i]=arr[i-1]+arr[i];
    }
    
    int q;
    cin>>q;
    for(int i=1;i<q+1;i++){
    	int l,m;
    	cin>>l>>m;
    	cout<<arr[m]-arr[l-1]<<endl;
    }
}

    // int tc = 1;
    // // cin >> tc;
    // for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        // solve();
    