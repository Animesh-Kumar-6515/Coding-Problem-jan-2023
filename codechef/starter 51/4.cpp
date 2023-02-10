#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve() {
    ll n,x,a[200001],dp[200001][2];
    cin >> n >> x;
    int xin=0;
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }
    ll temp1=0;
    ll temp2=0;
    ll flag=0;
    ll flag2=0;
    for(int i=2;i<=n;++i) {
        if(xin<1){
        temp1=(a[i-1]+x)^a[i];
        temp2=(a[i-1]+x)^(a[i]+x);
        flag=(a[i-1]^a[i]);
        flag2=(a[i-1]^(a[i]+x));
        }
        else{
            cout<<-1<<endl;
            return;
        }
        if(xin<1){
            if(xin<1){
                dp[i][0]=max(dp[i-1][0]+flag,dp[i-1][1]+(temp1));
                dp[i][1]=max(dp[i-1][0]+flag2,dp[i-1][1]+(temp2));
            }
            else{
                return;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    if(xin<1){
        int xolo=max(dp[n][0],dp[n][1]);
        cout <<xolo<< endl;
    }
    else{
        cout<<-1<<endl;
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