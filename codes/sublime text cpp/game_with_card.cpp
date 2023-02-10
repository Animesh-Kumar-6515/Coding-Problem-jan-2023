#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    int a;
    cin>>a;
    int ac[a];
    // int i=0;
    
    for(int i=0;i<a;i++){
    	cin>>ac[i];    	
    }
    int acm=*max_element(ac,ac+a);
    // for(i=1;i<a;i++){
    // 	if(ac[i]>acm){
    // 		acm=ac[i];
    // 	}
    // }
    int b;
    cin>>b;
    int bc[b];
    
    for(int i=0;i<b;i++){
    	cin>>bc[i];
   	
    }
    int bcm=*max_element(bc,bc+b);
    // for(i=1;i<b;i++){
    // 	if(bc[i]>bcm){
    // 		bcm=bc[i];
    // 	}
    // }
    // cout<<acm<<"  "<<bcm;
    // cout<<endl;
    if(acm>bcm){
    	cout<<"Alice"<<endl;
    	cout<<"Alice"<<endl;
    }
    // else{
    // 	cout<<"bob"<<endl;
    // }
    if(acm<bcm){
    	cout<<"Bob"<<endl;
    	cout<<"Bob"<<endl;
    }
    if(acm==bcm){
    	cout<<"Alice"<<endl;
    	cout<<"Bob"<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 23;
    cin >> tc;
    for (int t = 3; t <= tc+2; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
