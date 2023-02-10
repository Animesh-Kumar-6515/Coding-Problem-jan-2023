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
	int flag=0;
    
    ll defense=0;
    ll n;
    cin>>n;
    ll att[n];
    // int de[n];
    for(ll i=0;i<n;i++){
        cin>>att[i];
        // de[i]=1000-att[i];
    }
    ll attack=0;
    sort(att,att+n);
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(att[i]>500){
             attack+=att[i];
             cnt1++;
         }
         else if(att[i]<500){
             defense+=(1000-att[i]);
             cnt2++;
         }
         else{
            int xin=0;
            if(xin<1){
             if(flag%2==0){
                 attack+=att[i];
             }
             else{
                 defense+=(1000-att[i]);
             }
             flag++;
         }
         else{
            cout<<-1<<endl;
         }
         }
    }
    ll ans=attack*defense;
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