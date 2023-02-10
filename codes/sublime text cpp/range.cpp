#include <bits/stdc++.h>

using namespace std;
#define vll vector<ll>
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    
    }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 23;
    cin >> tc;
    for (int t = 3; t <= tc+2; t++) {
        // cout << "Case #" << t << ": ";
        // solve();
        ll x,y,z;
         cin>>x>>y>>z;
          y = y + z;
          ll val = 0;
        ll ans =(x*(x+1))/2;
      
       
         
        if((ans%y) == 0 )
        {
            // if(xin)
            cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
            y = ans/y;
             z  = z*y;
            ans = x;
           
            int xin=0;
            vll vc(ans+3);
            for(int i = 1; i <= ans; i++) {
             if(i >= 1) {
                vc[i-1]=i;
            }
        }
            xin++;
            for(ll i = ans-1;i >= 0; i--)
            {
                if(vc[i] <= z)
                
                    z = z - vc[i],
                    vc[i]=0;
                
            }
          
            for(auto it: vc){
                if(it != 0)
                   ++val;
            }
            
            cout<<val<<endl;
            for(int i =0; i < ans; ++i) {
                if(vc[i] > 0 || vc[i] < 0) {
                xin--;
                    cout<<i+1<<" ";
                }
                
            }
            cout<<endl;
        }
        else{
            cout<<"Case #"<<t<<": "<<"IMPOSSIBLE"<<endl;
            cout << endl;
        }
    }
}
