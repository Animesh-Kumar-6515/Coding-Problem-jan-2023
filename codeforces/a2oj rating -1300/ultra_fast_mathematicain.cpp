#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    string n;
    cin>>n;;
    string x;
    cin>>x;
    string s="";
    int l=n.size();
    for(int i=0;i<l;i++){
    	if(n[i]!=x[i]){
    		s=s+'1';
    	}
    	else{
    		s=s+'0';
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