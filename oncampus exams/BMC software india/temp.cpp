#include<bits/stdc++.h>
using namespace std;


int main(){
	vector<int>v;
    bool x=true;
    while(x){
        int n;
        cin>>n;
        if(n<0){
            x=false;
        }
        else{
            v.push_back(n);
        }
    }
    long long int mx=INT_MIN;
    for(int i=0;i<v.size();i++){
    	if(v[i]<100){
    		if(v[i]>mx){
    			mx=v[i];
    		}
    	}
    }
    cout<<mx<<endl;
}