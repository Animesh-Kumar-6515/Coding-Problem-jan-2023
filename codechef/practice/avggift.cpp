#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while( t-- ){
        int n,k; cin >> n >> k;
        int mi = 1e9, ma = -1;
        for( int i = 0; i<n; i++ ){
            int a; cin >> a;
            mi = min( mi, a );
            ma = max( ma, a );
        }
        
        if( k >= mi and k <= ma ) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}
 