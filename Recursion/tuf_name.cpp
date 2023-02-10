#include <bits/stdc++.h>
using namespace std;
int count=1;
void func(int a,int b){
	if(a>b){
		return;
	}
	a++;
	cout<<"Animesh Kumar"<<endl;
	func(a,b);
}
int main(){
	int a,b;
	cin>>a>>b;
	func(a,b);
}