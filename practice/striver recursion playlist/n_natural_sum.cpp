#include<bits/stdc++.h>
using namespace std;

// int sum=0;
void natural(int n , int sum){
	if(n==0){
		cout<<sum<<endl;
		return;
	}
	natural(n-1,sum+n);

}
int main(){
	natural(6,0);
}