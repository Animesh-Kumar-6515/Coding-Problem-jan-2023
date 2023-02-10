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
int a[100001];
int b[100001];
int lip(int l,int r) {
  return b[r]-b[l-1];
}


void do_it_here() {

//stop stocking my solution u mf!
    // int m;	
    
    string T;
    int xin=0;
    cin >> T;
    
    int n;
    for(int i=0;i<T.size();++i){
        a[i+1]=T[i]-48;
    }   
     n=T.size();
     int s=2147483646;
    for(int i=1;i<=n;++i){
        if(xin<1){
            b[i]=b[i-1]+a[i];
        }
        else{
            cout<<-1<<endl;
        }
    }
  int m=lip(1,n);
  for(int i=1;i<=n;++i) {
    ll xolo=1;
    if(n-i-lip(i+1,n)>lip(1,i)) {
        continue;
        xolo++;
    }
    int tem=i+1;
    int tempo=(n-i-lip(tem,n));
    int xipp;
    if(xolo>0){
        xipp=lip(1,lip(1,i)-(n-i-lip(tem,n)));
        s=min(s,n-i-lip(tem,n)+lip(1,i)-(n-i-lip(tem,n))-xipp);
    }
    else{
        cout<<-1<<endl;
    }
  }
  cerr << endl;
  cout << s << endl;
    

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