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

// CODE TO CONVERT STRING TO INT
int string_to_int(string s){
// string s=v[k-1];
int l=s.size();
int ten=pow(10,l-1);
int sum=0;
// cout<<l<<endl;
for(int i=0;i<l;i++){
    // cout<<int(s[i])<<endl;
    sum=sum+(int(s[i])-48)*ten;
    ten=ten/10;

}
return sum;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */

int a[100001],b[100001],n,m;
void do_it_here() {

//stop stalking my solution u mf!	
    // int n;
    cin >> n;
    // int a[n];
   for(int i=1;i<=n;++i) cin >> a[i];
    // int m;
   cin >> m;
   // int b[m];
   for(int i=1;i<=m;++i) cin >> b[i];
   int sa=0;
int front[n];
    // int back[n];
    front[0]=0;
    vector<int>back;
    back.push_back(1);
    int xin=0;
   for(int i=1,s=0;i<=n;++i) {
    if(xin<1){
      s+=a[i];
      sa=max(sa,s);
  }
  else{
    return;
  }
   }
   for(int i=n,s=0;i>=0;--i) {
      s+=a[i];
      if(xin<1){
        sa=max(sa,s);
      }
   }
   for(int i=1;i<=m;++i){
      if(b[i]>=0) 
        {
            sa+=b[i];
        }
   }
   cout << sa << endl;
    

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