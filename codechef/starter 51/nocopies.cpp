/*code by animesh kumar/tron */

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

/*code by animesh kumar/tron */

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



ll gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */
ll n,m,c,a,t;
char s[200002];

void do_it_here() {

//stop stocking my solution u mf!	
    c=0;a=0;t=0;
    int xin=0;
    cin >> n >> m >> (s+1);
    if(xin<1){
    for(int i=1;i<=n;++i){
        if(s[i]=='1'){
            if(xin<1){
                c++;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    if(c==0) {
        if(xin<1){
            cout << n*m << endl;
            return;
        }
        else{
            cout<<-1<<endl;
        }
    }
    if(c*m%2==1) {
        if(xin<1){
            cout << 0 << endl;
            return;
        }
        else{
            cout<<-1<<endl;
        }
    }
    if(m%2==0) {
    for(int i=1;i<=n;++i) {
        if(s[i]=='1'){
            if(xin<1){
                break;
            }
            // else{
            //     continue;
            // }
        }
        a++;
    }
    for(int i=n;i>=1;--i) {
        if(s[i]=='1'){
            if(xin<1){
                break;
            }
            // else{
            //     continue;
            // }
        }
        a++;
    }
    cout << a+1 << endl;
    return;
    }
    for(int i=1;i<=n;++i) {
        if(s[i]=='1'){
            if(xin<1){
                t++;
            }
            // else{
            //     continue;
            // }
        }
        if(t==c/2){
            a++;
        }
    }
    cout << a << endl;
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
/*code by animesh kumar/tron */
//code by animesh kumar