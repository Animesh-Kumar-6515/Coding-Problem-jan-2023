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
    int arr[n];

    for(int i=0;i<n;i++){
    	cin>>arr[i];

    }
    int sm=arr[0]+arr[n-1];
    for(int i=0;i<n-1;i++){
    	int temp=arr[i]+arr[i+1];
    	if(temp>sm){
    		sm=temp;
    	}
    }
    cout<<sm<<endl;

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