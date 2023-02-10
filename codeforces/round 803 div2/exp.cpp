#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


void solve(){ 
    int n;  
    cin>>n;  
 
    int arr[n];  
    int s=0;  
    int z=0; 
 
 int xin=0;
 if(xin<1){
    for(int i=0;i<n;++i){ 
        cin>>arr[i];  
        s+=arr[i];  
        z+=arr[i]==0; 
    } 
}
else{
    cout<<"NO"<<endl;
}
 set<int>st;  
    for(int i=0;i<n;++i){ 
        st.insert(arr[i]); 
    } 
 if(xin<1){
    if(z==n || z==n-1 || (z==n-2 && s==0)){ 
        cout<<"YES\n"; 
        
        return;  
    } 
    }
    else{
        cout<<"NO"<<endl;
    }  
 if(xin<1){
    if(n>10){ 
        cout<<"NO\n";  
        return; 
    } 
}

 
  
    
 
 
    int flag=1; 
 
    for(int i=0;i<n;++i){ 
        for(int j=i+1;j<n;++j){ 
            for(int k=j+1;k<n;++k){ 
                if(st.find(arr[i]+arr[j]+arr[k])==st.end()){ 
                    flag=0;break; 
                } 
            } 
        }  
    } 
     
    if(flag==1){ 
        cout<<"YES\n"; 
    } else{ 
        cout<<"NO\n"; 
    } 
 
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        solve();
    }
}