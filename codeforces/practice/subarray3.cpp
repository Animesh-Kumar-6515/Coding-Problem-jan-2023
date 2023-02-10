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
// string s=v[k-1];
// int l=s.size();
// int ten=pow(10,l-1);
// int sum=0;
// // cout<<l<<endl;
// for(int i=0;i<l;i++){
//     // cout<<int(s[i])<<endl;
//     sum=sum+(int(s[i])-48)*ten;
//     ten=ten/10;

// }
// return sum;

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!	
    int n;
    cin>>n;
    vector<ll> arr;
    ll mi=MAXN;
    ll mx=INT_MIN;
    ll pos=0,neg=0,zero=0;
    ll m=0;
    ll sm=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x>0){
            pos++;
        }
        if(x<0){
            neg++;
        }
        if(x==0){
            zero++;
        }
        mi=min(x,mi);
        m=max(x,m);
        mx=max(abs(x),mx);
        arr.push_back(x);
        sm=min(abs(x),sm);
    }
    ll fmax=0;
    ll fmin=0;
    cout<<zero<<endl;
    if(neg>0 and pos>0){
        fmax=mx*mx;
        fmin=mi*m;
    }
    else if(zero>0){
        fmax=mx*mx;
        fmin=0;
    }
    else{
        fmax=mx*mx;
        fmin=sm*sm;
    }
    cout<<fmin<<" "<<fmax<<endl;

    

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