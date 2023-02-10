#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
     int n,k;
     cin>>n>>k;
     if(n%2==0){
     	cout<<"YES"<<endl;
     }
     else{
     	if(k==1){
     		cout<<"YES"<<endl;
     	}
     	else{
     		cout<<"NO"<<endl;
     	}
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