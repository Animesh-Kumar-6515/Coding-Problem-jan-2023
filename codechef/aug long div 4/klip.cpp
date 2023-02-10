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
    int xin=0;
    int n;
    int a[400000];
    int t=0;
    int k;
    char s[200001];
    cin>>n>>k;
    if(xin<1){
        for(int i=1;i<=n;i++){
            cin>>s[i];
        }
    }
    else{
        cout<<-1<<endl;
    }
    for(int i=1;i<=2*n;i++){
        if(xin<1){
            a[i]=0;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
    int tem=48;
    for(int i=1;i<=n-k+1;i++){
        if((s[i]+t)%2==1){
            t++;
            if(tem==48){
                a[i+k-1]=1;
            }
            else{
                tem++;
            }
        }
        t=t-a[i];
        s[i]=48;
    }
    for(int i=n-k+2;i<=n;i++){
        s[i]=48+(s[i]+t)%2;
        if(tem==48){
            t-=a[i];
        }
        else{
            tem++;
        }
        
    }
    for(int i=1;i<=n;i++){
        cout<<s[i];
    }
    cout<<endl;


    

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