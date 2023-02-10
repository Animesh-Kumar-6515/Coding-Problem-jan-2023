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


void do_it_here(int tc) {

//stop stocking my solution u mf!	
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            // cout<<s[i]<<" "<<s[n-i]<<endl;
            flag++;
        }
    }
    // cout<<flag<<endl;
    if(flag==k){
        cout<<"Case #"<<tc<<": "<<0<<endl;
    }
    else if(flag<k){
        cout<<"Case #"<<tc<<": "<<k-flag<<endl;
    }
    else{
        cout<<"Case #"<<tc<<": "<<flag-k<<endl;
    }


    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 1;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here(t);

    }
}
/*code by animesh kumar/tron */
//code by animesh kumar