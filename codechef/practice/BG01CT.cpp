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
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            flag++;
        }
    }
    if(flag==0){
        cout<<0<<endl;
        return;
    }
    // cout<<flag<<endl;
    int start=0;
    int e=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            start=i;
            break;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
        }
        if(count==flag){
            e=i;
            break;
        }
    }
    // cout<<count<<endl;
    // cout<<start<<"  "<<e<<endl;
    int nb=0;
    for(int i=start;i<=e;i++){
        if(s[i]=='B'){
            nb++;
        }
    }
    cout<<nb<<endl;
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    // cin >> testcas;
    
    // for (int t = 1; t <= testcas; t++) {
        do_it_here();

    // }
}

//code by animesh kumar