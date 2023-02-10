#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a;
    while(true){
        int b;
        cin>>b;
        if(b<0){
            break;
        }
        else{
            a.push_back(b);
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]%6==0){
            cout<<a[i]<<endl;
        }
    }
}