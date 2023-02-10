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
	
    int t,n,m;
    cin>>t>>n>>m;
    ll maxi=t*n;
    ll temp=n*n;
    if(maxi<=m){
        ll sum=0;
        for(int i=0;i<t;i++){
            sum=sum+temp;
        }
        cout<<sum<<endl;
        return;
    }
    int s=0;
    ll sum=0;
    while(s<=m){
        s=s+n;
        sum=sum+temp;
    }
    s=s-n;
    // cout<<"s "<<s<<endl;
    // cout<<"sum "<<sum<<endl;
    sum=sum-temp;
    if(sum==m){
        cout<<sum<<endl;
        return;
    }
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