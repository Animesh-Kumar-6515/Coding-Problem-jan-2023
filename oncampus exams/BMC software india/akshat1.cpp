#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>ds;
int p=0;
	while(true){
		int x;
		cin>>x;
		if(x>=0){
			ds.push_back(x);
		}
		else{
		break;
		}
	}

	for(int i=0;i<ds.size();i++){
	if(ds[i]<100){
	p=max(ds[i],p);
	}
	}
	cout<<p;
}