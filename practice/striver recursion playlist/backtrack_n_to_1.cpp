#include<bits/stdc++.h>
using namespace std;


void f(int i,int n){
	if(i>n){
		return;
	}
	f(i+1,n);
	cout<<i<<endl;
}
int main(){
	f(1,4);
}