#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int f = 0, s = 0;
        for(int j = 0; j < n; j++){
            int a, b, c;
            cin >> a >> b >> c;
            if(a == 1){
                cout << "YES\n";
                f = b;
                s = c;
            }
            else if(b == c){
                cout << "YES\n";
                f = s = b;
            }
            else if(f > b || s > c){
                f = c;
                s = b;
                cout << "YES\n";
            }
            else if(f > c || s > b){
                f = b;
                s = c;
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}
