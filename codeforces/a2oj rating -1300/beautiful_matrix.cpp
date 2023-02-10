#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	int t=0,y=0;
    for(int i=1;i<=5;i++){
    	for(int j=1;j<=5;j++){
    		int x;
    		cin>>x;
    		if(x==1){
    			t=i ;
    			y=j;
    		}
    	}
    }
    int flag1=abs(t-3);
    int flag2=abs(y-3);
    cout<<flag1+flag2<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int testcas = 23;
    // cin >> testcas;
    
    // for (int t = 1; t <= testcas; t++) {
        do_it_here();
    // }
}