#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    string st;
    cin>>st;
    int l=st.size();
    int i=0;
    // cout<<l<<endl;
    string s="";
    while(i<l){
    	if(st[i]=='.'){
    		s=s+'0';
    		i++;
    	}
    	else if(st[i]=='-' and st[i+1]=='.'){
    		s=s+'1';
    		i+=2;
    	}
    	else{
    		s=s+'2';
    		i+=2;
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