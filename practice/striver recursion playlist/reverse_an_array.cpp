#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int n){
	if(n==0){
		return;
	}
	cout<<arr[n-1]<<" ";
	reverse_array(arr,n-1);
}
int main(){
	int arr[5]={1,2,3,4,5};
	reverse_array(arr,5);
}