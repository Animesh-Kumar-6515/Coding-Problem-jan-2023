#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

// if()


void do_it_here() {
	int mi=-99999;
    int n;
    int ma=MAXN;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }
    int xin=0;
    for(int i=0;i<n;i++){
    	int temp=a[i]-b[i];
    	if(temp<0){
    		cout<<"NO"<<endl;
    		return;
    	}
    	if(temp>=mi){
    		mi=temp;
    		// if(mi<0){
    		// 	cout<<"NO"<<endl;
    		// 	return;
    		// }
    	}
    	if(temp<=ma and b[i]!=0){
    		ma=temp;

    		xin=b[i];
    	}
    }
    cout<<mi<<"  "<<ma<<endl;
    // cout<<xin<<endl;
    if(mi==ma){
    	cout<<"YES"<<endl;
    	// cout<<1<<endl;
    }
    else{
    	// if(xin==0){
    	// 	cout<<"YES"<<endl;
    	// 	// cout<<2<<endl;
    	// }
    	// else{
    	// 	cout<<"NO"<<endl;
    	// }
    	cout<<"NO"<<endl;
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