/*tron*/

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


// int primeornot(int n){
// 	int flag=0;
// 	for(int i=0;i*i<=n;i++){
// 		if(n%i==0){
// 			flag++;
// 			if(i!=n/i){
// 				flag++;
// 			}
// 		}
// 	}
// 	return flag;
// }


// code to find all the prime number in a range n
// this is SIEVE OF ERATHOSTHEMES algorithm


// int n;
// cin>>n;
// vector<int>prime(n+1,1);

// prime[1]=0;
// for(int i=2;i<=n;i++){
// 	if(!prime[i])continue;
// 	for(int j=i*i;j<=n;j+=i){
// 		prime[j]=0;
// 	}
// }



int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}




void do_it_here() {

//stop stocking my solution u mf!	
    int n ; 
    cin >> n;
    int t = n + 1;
    vector<int> v(t);
    ll xol=0;
    for (int i = 0; i < t; i++) {
        xol++;
        cin >> v[i];
    }
    if (v[0] == 0) {
        xol++;
        cout <<0<<" "<<0<<" "<<0<< endl;
    }
    if (v[0] & 1 == 1) {
        int m = 1, flag = 1;
        int l = v[0] / 2;
        int xin=0;
        ll temp=0;
        int r = v[0] / 2;
        while (flag) {
            if (l == 0 ) {
                if(xin<1){
                m++;
                l = (v[0]/2) - 1;
                temp++;
                r = v[0] / 2;
                flag -= 1;
            }
            else{
                cout<<-1<<endl;
            }
            }
            if ((l ^ 1) + (m ^ 1) + (r ^ 1) == v[1]) {
                temp++;
                if(xin<1){
                cout << l <<" "<< m <<" "<< r << endl;
                break;
            }
            else{
                cout<<-1<<endl;
            }
            }
            if ((l ^ 1) + (m ^ 1) + (r ^ 1) > v[1])
            {
                r++;
                l--;
            }
        }
    }
    else {
        int m = 0, mf = 1;
        int l = v[0] / 2;
        int xin=0;
        int r = v[0] / 2;
        while (mf) {
            if (l == 0)
            {
                m++;
                l = v[0] / 2 - 1;
                r = v[0] / 2;
                mf -= 1;
            }
            if ((l ^ 1) + (m ^ 1) + (r ^ 1) == v[1])
            {
                if(xin<1){
                cout << l << " " << m << " " << r << endl;
                 break;
             }
             else{
                cout<<-1<<endl;
             }
            }
            if ((l ^ 1) + (m ^ 1) + (r ^ 1) > v[1])
            {
                r++;
                l--;
            }
        }
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