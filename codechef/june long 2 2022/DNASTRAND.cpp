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
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            st=st+'T';
        }
        if(s[i]=='T'){
            st=st+'A';
        }
        if(s[i]=='C'){
            st=st+'G';
        }
        if(s[i]=='G'){
            st=st+'C';
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