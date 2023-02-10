#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j=0;j<t;j++){
    	int i=0;
    while(i<n-1){
    	if(s[i]=='B' and s[i+1]=='G'){
    		swap(s[i],s[i+1]);
    		i++;
    	}
    	i++;
    }
}
cout<<s<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    // cin >> testcas;
    
    // for (int t = 1; t <= testcas; t++) {
        do_it_here();
    // }
}