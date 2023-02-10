/*code by animesh kumar*/

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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int temp=ceil((n*1.0)/(k*1.0));
    
    if(k>=n){
        cout<<1<<endl;
        return;
    }
    int maxs=0;
    for(int i=temp;i<=n;i++){
        
        for(int j=0;j<temp;j++){
            maxs+=s[i];
        }
        int win_min=0;
        for(int j=temp;j<n;j++){
            win_min=win_min+s[j]-s[j-temp];
            maxs=min(maxs,win_min);
            if(maxs==0){
                cout<<0<<endl;
                return;
            }
        }
    }    
    cout<<maxs<<endl;

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

//code by animesh kumar