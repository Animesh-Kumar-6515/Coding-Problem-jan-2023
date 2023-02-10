#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve() {
    ll n;
    cin >> n;
    ll a[600099];
    int xin=0;
    ll x=0;
    for(int i=n-1;i>=0;--i) {
        cin >> a[i];
        if(a[i]%2==1){
            if(xin<1){
                if(xin<1){
                    x=x^i;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                // cout<<-1<<endl;
                return;
            }
        }
    }
    int xon=0;
    if(x==0){
        if(xin<1){
            if(xon<1){
                cout<<"Cook"<<endl;
            }
            else{
                return;
            }
        }
        
    }
    else{
        if(xin<1){

            if(xon<1){
                cout<<"chef"<<endl;
            }
            else{
                return;
            }
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 1;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        solve();

    }
}