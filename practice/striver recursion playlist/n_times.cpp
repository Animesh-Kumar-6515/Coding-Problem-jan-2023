#include<bits/stdc++.h>
using namespace std;

void n_time(int n){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	n_time(n-1);
	
}
int main(){
	n_time(5);
}