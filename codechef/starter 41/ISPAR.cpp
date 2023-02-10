#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    // ll number,karisma;
    ll number=23;
    ll karisma=24;
    cin>>number>>karisma;
    if(karisma==2 or karisma==1){
    	if(karisma==2){
    		cout<<"ODD"<<endl;
    	}
    	if(karisma==1){
    		if(number%2==1){
    			cout<<"ODD"<<endl;
    		}
    		else{
    			cout<<"EVEN"<<endl;
    		}
    	}
    }
    else{
    	cout<<"EVEN"<<endl;
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