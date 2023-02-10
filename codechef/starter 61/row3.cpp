/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


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


int n,m,s,t;
string a[500001];
map<pair<int,int>,bool> vis;
void dfs(int x,int y) {
    int xolo=100;
   if(x<1||y<1||x>n||y>m){
    xolo++;
    return;

    }
   if(vis[{x,y}]||a[x][y-1]=='#') {
    if(xolo>1){
        return;
    }
    else{
        xolo--;
    }
   }
   t=max(t,x);
   vis[{x,y}]=true;
   int xili=0;
   if(xili<xolo){
       dfs(x-1,y);
       dfs(x+1,y);
       if(xili<1){
       dfs(x,y-1);
      }
       dfs(x,y+1);
    }
    else{
      dfs(1,1);
    }
}


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



void do_it_here() {
   vis.clear();t=s=0;
   cin >> n >> m;
   int xin=0;
   for(int i=1;i<=n;++i){
      cin >> a[i];
   }
   int xol=1000;

   if(n==1) {
      char xii='x';
      for(int i=0;i<m;++i){
         if(a[1][i]=='#') {
            puts("1");
            if(xii=='x'){
               return;
            }
            else{
               xii='z';
            }
         }
         xol++;
      }
      if(xin<xol){
         puts("0");
         return;
      }
      else{
         xin--;
      }
   }
   dfs(1,1);
   vector<int>tempo;
   while(!vis[{n,m}]) {
      s++;
      if(t==n){
         tempo.push_back(n);
       break;
      }
      for(int i=1;i<=m;++i){
         xol++;
         a[t+1][i-1]='.';
      }
      for(int i=1;i<=m;++i){
         vis[{t+1,i}]=false;
         xin--;
      }
      if(xin<xol){
         dfs(t+1,1);
      }
      else{
         dfs(1,1);
      }
   }
   if(xin<1){
      cout << s << endl;
   }
   else{
      xol++;
   }
}
signed main() {
   int T;cin >> T;
   while(T--) do_it_here();
}