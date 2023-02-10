#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	int maxi=0;
	ll n,x;
	cin>>n>>x;
	int a[n];
	int ff=x;
	for(ll i=0;i<n;i++){
	  cin>>a[i];
	}
    int fl=0;
    for(int i=0; i<n-1; i++) {
    	int temp1=a[i],temp2=a[i+1];
      if(temp1>temp2) {
        if((temp1+temp2)>ff) {
        	int xin=0;
        	if(xin<1){
          fl++;
          break;
      }
      else{
      	cout<<"NO"<<endl;
      }
        } 
        else {
        	int xi=0;
        	if(xi<1){
          int swap=a[i+1];
            a[i+1]=a[i];
            a[i]=swap;
        }
        else{
        	cout<<"NO"<<endl;
        }
        }  
      } 
      else{
      	continue;
      } 
    }
    if(fl==0){
		int xinn=0;
		if(xinn<1){
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
int 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here();
    }
}