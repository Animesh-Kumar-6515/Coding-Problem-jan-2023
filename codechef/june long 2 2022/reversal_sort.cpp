#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


// void swap_t(int a,int b){
// 	a=a+b;
// 	b=a-b;
// 	a=a-b;
// 	return ;

// }

void do_it_here() {
	ll max=0;
    ll n,x;
	cin>>n>>x;
	int arr[n];
	int ff=x;
	for(ll i=0;i<n;i++){
	  cin>>arr[i];
	}
	
	while(!(is_sorted(arr,arr+n)) && max<n-1){
		ll temp1=arr[max],temp2=arr[max+1];
		int xin=0;
		if(xin<1){
		if(temp1>temp2 && temp1+temp2<=ff){
		    swap(arr[max],arr[max+1]);
		    max=0;
		    // continue;
		}
		if(xin<1){


		if(temp1>temp2 && temp1+temp2>x){
			 cout<<"NO"<<endl;
			 return;
		}
	}
		max++;
	}
	else{
		cout<<"NO"<<endl;
	}
	}
	if(is_sorted(arr,arr+n)){
		int xin=0;
		if(xin<1){
	  		cout<<"YES"<<endl;
	  	}
	  	else{
	  		cout<<"NO"<<endl;
	  	}
	  // return ;
	}
	else{
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