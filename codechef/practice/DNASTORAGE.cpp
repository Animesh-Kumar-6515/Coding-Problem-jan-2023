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

    string s;
    cin>>s;
    string st="";
    for(int i=0;i<n;i+=2){
    	if(s[i]=='0' and s[i+1]=='0'){
    		st=st+'A';
    	}
    	else if(s[i]=='0' and s[i+1]=='1'){
    		st=st+'T';
    	}
    	else if(s[i]=='1' and s[i+1]=='0'){
    		st=st+'C';
    	}
    	else{
    		st=st+'G';
    	}

    }
    cout<<st<<endl;

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