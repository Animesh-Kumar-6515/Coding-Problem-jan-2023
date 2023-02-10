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
    // if(n==0){
    // 	cout<<0<<endl;
    // }
    if(n==1000){
    	cout<<10<<endl;
    }
    else if(n>=0 and n<=10){
    	// string s=to_string(n);
    	// if(s)
    	cout<<n<<endl;
    }
    else if(n>=100 and n<=999){
    	// while(n!=0){

    	// }
    	int one=0,ten=0,hun=0;
    	one=n%10;
    	ten=(n/10)%10;
    	hun=(n/100);
    	int tot=hun+one;
    	if(tot<=10 and ten==0){
    		cout<<tot<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}
    }
    else{
    	cout<<-1<<endl;
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