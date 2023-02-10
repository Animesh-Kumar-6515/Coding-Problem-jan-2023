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
    // taking input is over here
    int mx=INT_MIN;
    int flag=0;
    for(int i=0;i<v.size();i++){
    	if(to_string(v[i]).length()==1){
    		mx=v[i];
    		flag++;
    	}
    	else{
    		if(mx!=INT_MIN){  
    			cout<<mx<<endl;
    		}
    		flag=0;
    		mx=INT_MIN;
    		cout<<v[i]<<endl;
    	}
    }
    if(mx!=INT_MIN){ //for the last element we are checking this case
        cout<<mx<<"\n";
    }

}