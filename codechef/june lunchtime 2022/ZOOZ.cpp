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
    int temp=n/2;
    string st="";
    for(int i=0;i<temp;i++){
    	if(i%2==0){
    		st=st+'1';
    	}
    	else{
    		st=st+'0';
    	}
    }
    string str="";
    if(n%2==0){
    	string st1=string(st.rbegin(),st.rend());
    	 str=st+st1;

    }
    else{
    	string st1=string(st.rbegin(),st.rend());
    	 str=st+'0'+st1;

    }
    cout<<str<<endl;

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