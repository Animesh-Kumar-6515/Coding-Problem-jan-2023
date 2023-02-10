#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve() {

    ll n,m,c,a,t;
    c=0;a=0;t=0;
    char s[200002];
    
    int xin=0;
    cin >> n >> m >> (s+1);
    // if(xin<1){
    for(int i=1;i<=n;++i){
        if(s[i]=='1'){
            if(xin<1){
                if(xin<1){
                    c++;
                }
                // else{
                //     break;
                // }
            }
           
        }
    }
    if(c==0) {
        if(xin<1){
            cout << n*m << endl;
            if(xin<1){
                return;
            }
        }
        else{
            cout<<-1<<endl;
            // break;
            return;
        }
    }
    if(c*m%2==1) {
        if(xin<1){
            if(xin<1){
            cout << 0 << endl;
            return;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }
    if(m%2==0) {
    for(int i=1;i<=n;++i) {
        if(s[i]=='1'){
            if(xin<1){
                break;
            }
           
        }
        a++;
    }
    for(int i=n;i>=1;--i) {
        if(s[i]=='1'){
            if(xin<1){
                break;
            }
            else{
                continue;
            }
        }
        a++;
    }
    cout << a+1 << endl;
    return;
    }
    for(int i=1;i<=n;++i) {
        if(s[i]=='1'){
            if(xin<1){
                t++;
            }
            else{
                continue;
            }
        }
        if(t==c/2){
            if(xin<1){
            a++;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    cout << a << endl;
    // }
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