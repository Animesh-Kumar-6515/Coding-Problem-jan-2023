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
    ll n;
    cin>>n;
    ll arr1[n];
    ll arr2[n];
    ll sum1=0;
    ll sum2=0;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        sum1+=arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        sum2+=arr2[i];
    }
    ll mx=0;
    if(sum1==sum2){
        for(int i=0;i<n;i++){
            if(arr1[i]>arr2[i]){
                mx+=0;
            }
            else{
                mx+=(arr2[i]-arr1[i]);
            }
        }
        cout<<mx<<endl;
        // return;
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