#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


int check(int x){
	int ones=x%10;
	int tens=(x/10)%10;
	int huns=(x/100)%10;
	int thou=x/1000;
	set<int> se;
	se.insert(ones);
	se.insert(tens);

	se.insert(huns);

	se.insert(thou);
	if(se.size()==4){
		return 1;
	}
	else{
		return 0;
	}
}

void do_it_here() {
	
    int n;
    cin>>n;
    int i=n+1;
    while(check(i)==0){
    	i++;
    }

    cout<<i<<endl;

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