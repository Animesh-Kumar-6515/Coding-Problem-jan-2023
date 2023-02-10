#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int tf=0;
	for(int i=0;i<n;i++){
		int a,b,c;
		int flag=0;
		cin>>a>>b>>c;
		if(a==1){
			flag++;
		}
		if(b==1){
			flag++;
		}
		if(c==1){
			flag++;
		}
		if(flag>=2){
			tf++;
		}	
	}
	cout<<tf<<endl;
}