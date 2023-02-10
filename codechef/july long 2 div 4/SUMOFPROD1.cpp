/*tron*/

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

//stop stocking my solution u mf!	
    int n;
    cin>>n;
    ll s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int one=0;
    int zero=0;
    ll sum=0;
    ll flag=0;
    for(int i=0;i<n;i++){
        
        if(s[i]==0){
            if(zero<1){
            sum=sum+((flag*(flag+1))/2);
            flag=0;
            }
            else{
                cout<<-1<<endl;
            }
        }
        // else if(i==(n-1)){
        //     cout<<"yes"<<endl;
        //     sum=sum+((flag*(flag+1))/2);
        //     flag=0;

        else{
            // cout<<"YES"<<endl;
            // sum=sum+((flag*(flag+1))/2);
            flag=flag+1;
        }
    }
    if(flag){
        sum=sum+((flag*(flag+1))/2);
    }
    cout<<sum<<endl;
    // cout<<"hardcore sex"<<endl;
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