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
    string a,b;
    cin>>a;
    cin>>b;
    set<char> alpha;
    // cout<<a<<"   "<<b<<endl;
    for(int i=0;i<n;i++){
    	// cout<<a[i]<<" "<<b[i]<<endl;
    	if(a[i]!=b[i]){
    		// cout<<b[i]<<endl;
    		alpha.insert(b[i]);
    		// cout<<b[i]<<endl;
    	}
    }
    int l=alpha.size();
   	cout<<l<<endl;

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