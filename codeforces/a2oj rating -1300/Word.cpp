#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    string s;
    cin>>s;
    int up=0,dw=0;
    for(int i=0;i<s.size();i++){
    	int x=int(s[i]);
    	if(x>=65 and x<=90){
    		up++;
    	}
    	else{
    		dw++;
    	}
    }
    if(up<=dw){
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
    	transform(s.begin(), s.end(), s.begin(), ::toupper);
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