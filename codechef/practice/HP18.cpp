#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;




void solve() {
	
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    int ac=0,bc=0;
    int flag=0;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
        if(arr[i]%a==0 and arr[i]%b==0){
            flag++;
        }
    	else if(arr[i]%a==0){
    		ac++;
    	}
    	else if(arr[i]%b==0){
    		bc++;
    	}
    }
    if(flag){
        // cout<<
        ac++;
    }
    if(ac>bc){
        cout<<"BOB"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;
    }
    


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