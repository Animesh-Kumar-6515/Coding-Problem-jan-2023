#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int n;
    cin>>n;
    // cout<<1<<" ";
    // ll sum=1;
    // cout<<sum<<" ";
    // for(int i=1;i<n;i++){
    	
    // }

    // cout<<endl;
    if(n%2==1){
    	int x=n/2;
    	cout<<x+1<<" ";
    	for(int i=x;i>=1;i--){
    		cout<<i<<" "<<n-i+1<<" ";
    	}
    	cout<<endl;
    }
    if(n%2==0){
    	int x=n/2;
    	for(int i=x;i>=1;i--){
    		cout<<i<<" "<<n-i+1<<" ";
    	}
    	cout<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here();
    }
}