#include <bits/stdc++.h>

using namespace std;
void solve() {
	while(true){
		string s;
		cin>>s;
		if(s.size()==0){
			break;
		}
		for(int i=0;i<sizeof(s);i++){
			cout<<(char)toupper(s[i]);

		}
		cout<<endl;
	}
    
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}