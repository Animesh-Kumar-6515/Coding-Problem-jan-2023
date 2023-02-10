/*tronani*/

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
	
    ll n;
    cin>>n;
    ll att[n];
    // int de[n];
    for(ll i=0;i<n;i++){
        cin>>att[i];
        // de[i]=1000-att[i];
    }
    sort(att,att+n);
    ll temp=n/2;
    ll defence=0;
    ll attack=0;
    int flag=0;
    for(ll i=0;i<temp;i++){
        if(att[i]<500){
            defence=defence+(1000-att[i]);
        }
        else if(att[i]>500){
            attack=attack+att[i];
        }
        else{
            flag++;
        }
    }
    for(ll i=temp;i<n;i++){
        if(att[i]>500){
            attack=attack+att[i];
        }
        else if(att[i]<500){
            defence=defence+(1000-att[i]);
        }
        else{
            flag++;
        }
    }
    int xin=flag/2;
    if(xin%2==0){
        attack=attack+(xin*500);
        defence=defence+(xin*500);
    }
    else{
        attack=+(xin*500);
        defence=defence+(xin*500)+500;
    }

    ll ans=attack*defence;
    if(flag>0){
        cout<<
    }
    cout<<ans<<endl;

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