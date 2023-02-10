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
    int n=v.size();
    int flag=0;
    for(int i=0;i<n;i++){
        if(to_string(v[i]).length()==3){
            if(flag==0){
                cout<<v[i]<<endl;
            }
            flag++;
        }
        else{
            cout<<v[i]<<endl;
            flag=0;
        }
    }
}