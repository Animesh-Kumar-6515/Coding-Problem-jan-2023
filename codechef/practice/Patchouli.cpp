// https://codeforces.com/contest/1688/problem/B

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    ll n;
    cin>>n;
    ll arr[n];
    ll e=0,o=0,me=M,c=0;
    ll temp=0;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    	// cin>>arr[i];
    	if(arr[i]%2==0){
    		e++;
    		temp=arr[i];
    		// cout<<"if    "<<endl;
    		c=0;
    		while(temp%2==0){
    			temp=temp/2;
    			c++;
    			// cout<<"while   "<<endl;
    		}
    		if(c<me){
    			me=c;
    		}
    	}
    	else{
    		o++;
    	}
    }
    if(o==n){
    	cout<<0<<endl;
    }
    else{
    	cout<<me+e-1<<endl;
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