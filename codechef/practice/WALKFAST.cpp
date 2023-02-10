// https://www.codechef.com/ICPCTR05/problems/WALKFAST

// you can try it again

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int N,A,B,C,D,P,Q,Y;
    cin>>N>>A>>B>>C>>D>>P>>Q>>Y;
    int arr[N];
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    }
    int walk=abs(arr[A-1]-arr[B-1])*P;
    int train=abs(arr[C-1]-arr[A-1])*P;
    int temp2=(abs(C-A)*P)+(Y-(abs(C-A)*P))+((D-C)*Q)+(abs(D-B)*P);
    int temp=abs(A-C)*P;
    int temp3=(abs(B-A)*P);
    if(train>Y){
    	cout<<(B-A)*P<<endl;
    	return;
    }
    else{
    	if(temp<=Y){
    		cout<<min(temp3,temp2)<<endl;
    	}
    	else{
    		cout<<temp3<<endl;
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