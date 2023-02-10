#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int x,y;
    cin>>x>>y;
    int temp=abs(x-y);
    int f=0;
    for(int i=0;i<100;i+=10){
    	int j=i+10;
    	f++;
    	if(x>=i and x<=j){
    		break;
    	}
    }
    int c=0;
    for(int i=0;i<100;i+=10){
    	int j=i+10;
    	c++;
    	if(y>=i and y<=j){
    		break;
    	}
    }
    cout<<abs(c-f)<<endl;

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