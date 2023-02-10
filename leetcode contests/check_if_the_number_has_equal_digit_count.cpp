#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

// int hs[10];


void solve() {
	unordered_map<int,int> hs;
    string s;
    cin>>s;
    cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++){
    	// cout<<s[i]<<endl;
    	hs[s[i]]=hs[s[i]]+1;

    }
    // for(int i=0;i<10;i++){
    // 	cout<<hs[i];
    // }
    int hss[10];
    for(int i=0;i<s.size();i++){
    	// cout<<"hs   "<<<<"   s   = "<<s[i]<<endl;
    	if(hs[i] != s[i]){
    		cout<<hs[i]<<endl;
    		cout<<"false"<<endl;
    		return;
    	}
    	// hss[i]=i.second
    }
    cout<<"true"<<endl;
    return;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int tc = 1;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++) {
    //     // cout << "Case #" << t << ": ";
        solve();
    // }
}