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
    int flag=0;
    while(n>0){
    	int temp=n%10;
    	int x=0;
    	if(temp==4 or temp==7){
    		x++;
    	}
    	else{
    		flag++;
    	}
    	n=n/10;
    }
    if(flag>0){
    	cout<<"NO"<<endl;
    }
    else{
    	cout<<"YES"<<endl;
    }


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