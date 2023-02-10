#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.size();
    int flag=0;
    int one=0;
    int zero=0;
    for(int i=0;i<len/2;i++){
    	if(s[i]!=s[len-(i+1)]){
    		flag++;
    		if(s[i]=='1'){
    			one++;
    		}
    		else{
    			zero++;
    		}
    	}
    }
    int sol=flag+1;
    flag=((one/2)+(zero/2));
    if(one%2==zero%2){
    	flag=flag+one%2;
    }
    
    cout<<sol/2<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 23;
    cin >> tc;
    for (int t = 3; t <= tc+2; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
