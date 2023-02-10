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



int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!	
    ll x,y;
    cin>>x>>y;
    ll b=y;
    // ll temp=(x*3)-b;
    ll a,c;
    ll tot_sum=x*3;
    ll b_excluded=0;
    if(y<0){
        if(x<=0){
            b_excluded=tot_sum-y;
        }
        else{
            b_excluded=tot_sum+y;
        }
    }
    else
    {
        if(x>=0){
            b_excluded=tot_sum-y;
        }
        else{
            b_excluded=tot_sum+y;
        }
    }
    
    // if(temp%2==0){
    //     a=temp/2;
    //     c=temp/2;
    // }
    // else{
    //     a=ceil((temp*1.0)/2.0);
    //     c=floor((temp*1.0)/2.0);
    // }
    a=0;
    c=b_excluded;
    cout<<a<<" "<<b<<" "<<c<<endl;

    

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