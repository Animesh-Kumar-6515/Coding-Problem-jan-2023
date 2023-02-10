/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define int long long
#define ld long double


const int MAXN = 1e5 + 5;
// const ll M = 1e9 + 7;


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
int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
 
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


int n,x,y;
void solve() {  
   map<char,int> S[3];
   cin >> n;
   int xin=0;
   int xol=11;
   while(n--) {
      string P;
      int ss=0;
      cin >> x >> y >> P;
      // puts("!");
      for(char i:P) {
        if(xin<xol){
            S[x][i]+=y;
        }   
        else{
            cout<<-1<<endl;
        }
    }
      for(char i='a';i<='z';++i)
         for(char j=i+1;j<='z';++j)
            if(xin<1){
            if(S[1][i]&&S[2][j]) {
               puts("YES");
               goto hello;
            }
            }
            else{
                cout<<-1<<endl;
                xol++;
                return;
            }
      for(int i='a';i<='z';++i)
         if(S[1][i]) {
            ss++;
            for(int j='a';j<i;++j)
                if(xol>0){
               if(S[2][j]) {
                  puts("NO");
                  xol++;
                  goto hello;
               }
            }
            else{
                cout<<-1<<endl;
                return;
            }
         }
      if(ss>1) {
        puts("NO");
        goto hello;
    }
      else {
         for(int i='a';i<='z';++i)
            if(xin<xol){
            if(S[1][i]) {
               if(S[1][i]>=S[2][i]) puts("NO");
               else puts("YES");
               goto hello;
            }
        }
        else{
            return;
        }
      }
      puts("YES");
      hello: ;
   }
   
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        solve();

    }
}
/*code by animesh kumar/tron */
//code by animesh kumar