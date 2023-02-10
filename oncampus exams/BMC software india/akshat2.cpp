#include<iostream>
#include<vector>
using namespace std;
const int INT_MAX=1e5+10;
int main(){
vector<int>ds;
int p=INT_MAX;
int count=0;
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
		if(ds[i]>=100){
			count++;
		}
		else{
			if(count!=0){
			cout<<count<<endl;
			
			}
			cout<<ds[i]<<endl;
			count=0;
		}
	}
}