#include <bits/stdc++.h>
using namespace std;
int count=1;
void func(int a,int b){
	if(a>b){
		return;
	}
	
	cout<<a<<endl;
	a++;
	func(a,b);
	// a++;
}
int main(){
	int b;
	cin>>b;
	func(1,b);
}