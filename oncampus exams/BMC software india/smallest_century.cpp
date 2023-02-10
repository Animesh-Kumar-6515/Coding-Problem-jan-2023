#include<iostream>
using namespace std;

int main(){
vector<int>ds;
int p=0;
	for(int i=0;i++){
		int x;
		cin>>x;
		if(x>=0){
			ds.push_back(x)
		}
		else{
		break;
		}
	}

	for(int i=0;i<n;i++){
	if(ds[i]<100){
	p=max(ds[i],p);
	}
	}
	cout<<p;
}