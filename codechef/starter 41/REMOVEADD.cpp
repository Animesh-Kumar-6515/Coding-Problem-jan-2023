#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


int rest, res, j, n; 
map<ll,ll>mip;

int do_it_here(int *a) {
	
     
    rest = n - 1, res = n, j = 0; 
    mip.clear(); 
    for (int i = 0; i < n; ++i) 
    { 
        rest = n - i - 1; 
        int temp; 
        if(mip.find(a[i]) != mip.end()){
        	temp = mip[a[i]];
        }
        else{
        	temp = 0;
        }
        if(temp>j){
        	j=temp;
        }
        else{
        	j=j;
        }
        mip[a[i]] = 1 + i; 
        res = min(res, min(j, rest) + j + rest); 
    } 
    return res; 

}



void solve(){
	cin >> n; 
        int a[n]; 
        for (int i = 0; i < n; ++i) 
        { 
            cin >> a[i]; 
        } 
        cout << do_it_here(a) << "\n"; 
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