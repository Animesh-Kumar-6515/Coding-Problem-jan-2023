/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define MOD 1000000007

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
// int string_to_int(string s){
// // string s=v[k-1];
// int l=s.size();
// int ten=pow(10,l-1);
// int sum=0;
// // cout<<l<<endl;
// for(int i=0;i<l;i++){
//     // cout<<int(s[i])<<endl;
//     sum=sum+(int(s[i])-48)*ten;
//     ten=ten/10;

// }
// return sum;
// }

int frac(int x) {
   int p=1;
   for(int i=1;i<=x;++i)
      p=(p*i)%MOD;
   return p;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stalking my solution u mf!	
    ll n,m,a[101],dp[101][101][101][2];
    memset(dp,0,sizeof(dp));
    cin >> n >> m;
    for(ll i=1; i<=n; ++i){
        cin >> a[i];
    }
    if(a[1]==0) {
        dp[1][1][1][0]=1;
        dp[1][1][0][1]=1;
    } else{
        dp[1][1][a[1]%2^1][a[1]%2]=1;
    }
    ll xin=0;
    for(ll i=2; i<=n; ++i) {
    if(xin<1){ 
        for(ll j=0; j<=m; ++j) { 
            for(ll k=0; k<=n/2; ++k) { 
                if(a[i]%2==0) {
                    if(k!=0&&j!=0) dp[i][j][k][0]+=dp[i-1][j-1][k-1][1];
                    if(k!=0)       dp[i][j][k][0]+=dp[i-1][j][k-1][0];
                    dp[i][j][k][0]%=MOD;
                }
                if(a[i]%2==1||a[i]==0) {
                    dp[i][j][k][1]+=dp[i-1][j][k][1];
                    if(j!=0)       dp[i][j][k][1]+=dp[i-1][j-1][k][0];
                    dp[i][j][k][1]%=MOD;
                }
            }
        }
    }
    else{
        return;
    }
    }
    ll even=n/2,odd=(n+1)/2;
    for(ll i=1;i<=n;++i)
       if(a[i]!=0) {
        if(xin<1){
          even-=a[i]%2^1;
          odd-=a[i]%2;
      }
      else{
        cout<<-1<<endl;
      }
       }
       ll ans=frac(odd);
    cout << ans*frac(even)%MOD*(dp[n][m][n/2][0]+dp[n][m][n/2][1])%MOD << endl;
    

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