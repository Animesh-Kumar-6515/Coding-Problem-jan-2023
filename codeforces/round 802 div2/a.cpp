#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double

const int mini=INT_MIN;
const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int n,m;
    cin>>n>>m;
    int mi=mini;
    int x=0,y=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		int z;
    		cin>>z;
    		if(z>mi){
    			mi=z;
    			x=i;
    			y=j;
    			
    		}
    	}
    }
    int temp1=max(x+1,n-x);
    int temp2=max(y+1,m-y);
    ll sol=temp1*temp2;
    cout<<sol<<endl;
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