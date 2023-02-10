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

// CODE TO CONVERT STRING TO INT
int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
 
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stalking my solution u mf!	
    ll n;
    cin>>n;
    ll a[n];
    ll b[n-1];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++){
        cin>>b[i];
    }
    ll x=n-1;
    sort(a,a+n);
    sort(b,b+x);
    ll a1=abs(b[0]-a[0]);
    ll a3=abs(b[x-1]-a[n-1]);
    ll a2=abs(b[0]-a[1]);
    ll a4=abs(b[x-1]-a[n-2]);
    // if(a1==0){
    //     cout<<a2<<endl;
    //     return;
    // }
    // else if(a2==0){
    //     cout<<a1<<endl;
    //     return;
    // }
    // cout<<min(a1,a2)<<endl;
    if(a1==a3 and a1>0){
        cout<<a1<<endl;

    }
    else if(a2==a4 and a2>0){
        cout<<a2<<endl;
    }
    else if(a3 == a4 and a3>0){
        cout<<a3<<endl;
    }
    // else if(a2==a4)

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