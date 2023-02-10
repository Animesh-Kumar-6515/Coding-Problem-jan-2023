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
    int x=(n-3)/3;
    int temp=n%3;
    if(temp==2){
    cout<<x+2<<" "<<x+3<<" "<<x<<endl;

    }
    else if(temp==1){
    cout<<x+1<<" "<<x+3<<" "<<x<<endl;
    }
    else{
    	    cout<<x+1<<" "<<x+2<<" "<<x<<endl;
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