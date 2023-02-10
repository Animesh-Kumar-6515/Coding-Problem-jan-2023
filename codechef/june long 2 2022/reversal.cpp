#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    ll n,x;
	cin>>n>>x;
	ll a[n];
	// int ff=x;
	for(ll i=0;i<n;i++){
	  cin>>a[i];
	}
	bool flag=true;
        for(int i=0; i<n-1; i++) {
          if(a[i]>a[i+1]) {
            if((a[i]+a[i+1])>x) {
              flag=false;
              break;
            } else {
              int swap=a[i+1];
                a[i+1]=a[i];
                a[i]=swap;
            }  
          } else continue;
        }
        if (flag) {
        	cout<<"YES"<<endl;
        }
        else {
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