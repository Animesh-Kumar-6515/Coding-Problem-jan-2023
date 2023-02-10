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
	
    ll t,n,m;
    cin>>t>>n>>m;
    ll sum=0;
    ll flag=1;
    ll s=0;
    while(s<=m and flag<=t){
        s=s+n;
        sum=sum+(n*n);
        // cout<<"sum  "<<sum<<endl;
        flag++;
    }
        s=s-n;
        // if(s>=m){
        sum=sum-(n*n);
        // }
        int temp=n*n;
        if(flag>t or (s>m and flag>t)){
            cout<<sum+temp<<endl;
            return;
        }
        // cout<<"sum s "<<sum<<endl;
        // cout<<"s "<<s<<endl;
        sum=sum+((m-s)*(m-s));
        cout<<sum<<endl;


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