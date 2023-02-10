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
    int n;
    cin>>n;
    int temp=n;
    int hun=0;
    int fifty=0;
    int ten=0,five=0,two=0,one=0;
    hun=temp/100;
    temp=temp-(100*hun);
    fifty=temp/50;
    temp=temp-(50*fifty);//you can omit fifty as there can be max only one fifty
    ten=temp/10;
    temp=temp-(ten*10);
    five=temp/5;
    temp=temp-(five*5);//you can omit five as there can be max only one five
    two=temp/2;
    temp-=(two*2);
    one=temp/1;
    int total=hun+fifty+five+two+one+ten;
    cout<<total<<endl;

    

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