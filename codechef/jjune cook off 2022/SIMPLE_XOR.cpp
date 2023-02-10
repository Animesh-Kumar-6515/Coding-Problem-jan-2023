#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
	int l,r;
	cin>>l>>r;
	if((r-l)==3){
		if(l%2==0){
			cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	else{
		if(l%2==0){
		cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
	}
		else{
			cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<endl;
		}
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