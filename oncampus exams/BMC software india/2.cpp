#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
    while(true){
        int n;
        cin>>n;
        if(n<0){
            break;
        }
        else{
            v.push_back(n);
        }
    }
    int m=INT_MIN;
    int streak=0;
    for(int i=0;i<v.size();i++){
    	if(to_string(v[i]).length()==3){
    		if(v[i]>m){
    			m=v[i];
    		}
    		streak++;
    	}
    	else{
    		if(m!=INT_MIN){
    			cout<<m<<endl;
    		}
    		streak=0;
    		m=INT_MIN;
    		cout<<v[i]<<endl;
    	}
    }

}