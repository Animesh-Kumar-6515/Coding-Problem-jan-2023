/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

void do_it_here() {

//stop stocking my solution u mf!	
    int n; //enter the number of lines u want to print
    cin>>n;
    int temp=0;
    for(int i=0;i<n;i++){
    	for(int j=i;j<n-1;j++){
    		cout<<"-";
    	}
    	for(int k=0;k<=temp;k++){
    		cout<<"*";
    	}
    	cout<<endl;
    	temp=temp+2;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    do_it_here();
}
/*code by animesh kumar/tron */
//code by animesh kumar