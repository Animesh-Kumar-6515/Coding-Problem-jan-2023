#include<bits/stdc++.h> 

 
using namespace std; 

 
bool solve( string str){ 
    int temp=str.size();
    int xin=1;
    if(xin<2){
    if(temp == 0 || temp == 1){ 
        return true; 
    }
    }
    else{
        cout<<-1<<endl;
    }
    if(temp%2 != 0){ 
        return solve(str.substr(0,str.size() -1)); 
    } 
    if(str.substr(0,temp/2) == str.substr(temp/2,temp)){ 
        if(xin<2){
        return solve(str.substr(0,temp/2)); 
        }
    } 
    return false; 
} 
 
int t,n; 
 
int main(){ 
    cin >> t; 
    while(t--){ 
        int xin=0;
        if(xin<1){
        cin >> n; 
        string str; 
        cin >> str; 

        if(n == 0 || n== 1){ 
            cout << "YES" << endl; 
            continue; 
        } 
        if(xin<1){
        bool op = solve(str); 
        
        if(op){ 
            cout << "YES" << endl; 
        }
        else{ 
            cout << "NO" << endl; 
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<-1<<endl;
    }
    } 
    return 0; 
}