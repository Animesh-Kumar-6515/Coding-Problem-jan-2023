#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	// cout<<"YES"<<endl;
	char alpha[]={'a','b','c','d','e','f','g','h','i','j','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n,x;
	cin>>n>>x;
	int temp=ceil(n/2);
	string st1="",st2="",st="";
	// char temp2=a;
	if(x<=temp){
		for(int i=0;i<x;i++){
			st1=st1+alpha[i];
			// temp2
		}
		int tem=temp-x;
		for(int i=0;i<tem;i++){
			st1=st1+'z';
		}
		if(n%2==0){
			st=string(st1.rbegin(),st1.rend());
			st2=st1+st;

		}
		else{
			st1.pop_back();
			st=string(st1.rbegin(),st1.rend());
			st2=st1+'z'+st;
		}
		cout<<st2<<endl;
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