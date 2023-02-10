#include <bits/stdc++.h>

using namespace std;

#define ar array
#define int long long
#define ld long double


const int MAXN = 1e5 + 5;
// const ll M = 1e9 + 7;


bool my_compare(string a, string b)
{
    // Check if a string is present as
    // prefix in another string, then
    // compare the size of the string
    // and return the larger size
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
 
    // Else return lexicographically
    // smallest string
    else
        return a < b;
}

// int primeornot(int n){
//    int flag=0;
//    for(int i=0;i*i<=n;i++){
//       if(n%i==0){
//          flag++;
//          if(i!=n/i){
//             flag++;
//          }
//       }
//    }
//    return flag;
// }

/*code by animesh kumar/tron */

// code to find all the prime number in a range n
// this is SIEVE OF ERATHOSTHEMES algorithm


// int n;
// cin>>n;
// vector<int>prime(n+1,1);

// prime[1]=0;
// for(int i=2;i<=n;i++){
//    if(!prime[i])continue;
//    for(int j=i*i;j<=n;j+=i){
//       prime[j]=0;
//    }
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


int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}
int n,x;
void solve() {
   cin >> n;
   x=0;
   int xin=0;;
   int xol=100;
   while(n%2==0)
    {
      x++;
      xol++;
      if(xin<xol){
         n/=2;
      }
      else{
         cout<<-1<<endl;
      }
   }
   if(x%2==1) {
      x--;
      n*=2;
   }
   for(int i=0;i*i<=n;++i) {
      int y=n-i*i,z=sqrt(y);
      if(z*z==y) {
         if(xin<xol){
         cout << (i<<(x/2)) << ' ' << (z<<(x/2)) << endl;
         return;
         xol++;
         }
         else{
            cout<<-1<<endl;
         }
      }
   }
   // puts("-1");
   cout<<-1<<endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}