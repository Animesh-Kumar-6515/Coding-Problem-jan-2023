#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int n,k;
    cin>>n>>k;

    int x=ceil(n/5);
    int flag=0;
    int c=0;
    if(n%5!=0){
    for(int i=0;i<n;i+=5){
    	int j=i+5;
    	c++;
    	if(k>=i and k<=j){
    		break;
    	}
    }
    cout<<x-c+1<<endl;
    return;
}
else{
	for(int i=0;i<n;i+=5){
		int j=i+5;
		c++;
		if(k>=i and k<=j){
			break;

		}

	}
	cout<<x-c<<endl;
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