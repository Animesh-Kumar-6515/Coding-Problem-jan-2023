#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    ll X = 0, Y = 0;
        cin >> X >> Y;
        ll a=X,b=Y;
        int xin=10;
        if(xin>0){
        if (a == b)
        {
            cout << a-b+a << '\n';
        }
        else if (a == 0 or b == 0)
        {
            cout << -1 << endl;
        }
        else
        {
        	ll mit=0;
        	ll mat=0;
        	if(a>b){
        		mit=b;
        		mat=a;
        	}
        	else{
        		mit=a;
        		mat=b;
        	}
            // ll mit = min(X, Y);
            // ll mat = max(X, Y);
            ll flag= 0;
            if(xin>0){
            while (mit < mat)
            {
                mit=mit * 2;
                flag=flag+1;
            }
        }

            if (mit >= mat)
            {
                mit /= 2;
                flag=flag-1;
            }
            int it = mit - (mat - mit);
            mit -= it;
            mat -= it;
            flag += it;
            int xin=9;
            xin++;
            mit *= 2;
            // flag++;
            flag += mat+1;
            cout << flag << endl;

}
}
else{
	cout<<-1<<endl;
}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here();
    }
}