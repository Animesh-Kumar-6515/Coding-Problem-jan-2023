#include<bits/stdc++.h>
using namespace std;

void fibonacci(int a,int b,int n){
	if(n==0){
		return;
	}
	cout<<a+b<<" ";
	int x=a;
	a=b;
	b=a+x;
	fibonacci(a,b,n-1);
}
int main(){
	fibonacci(0,1,7);
}