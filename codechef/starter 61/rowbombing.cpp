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
   // if(xili<xolo){
       dfs(x-1,y);
       dfs(x+1,y);
       dfs(x,y-1);
       dfs(x,y+1);
    // }
}
void do_it_here() {
   vis.clear();t=s=0;
   cin >> n >> m;
   for(int i=1;i<=n;++i)
      cin >> a[i];
   if(n==1) {
      for(int i=0;i<m;++i)
         if(a[1][i]=='#') {
            puts("1");
            return;
         }
      puts("0");
      return;
   }
   dfs(1,1);
   while(!vis[{n,m}]) {
      s++;
      if(t==n) break;
      for(int i=1;i<=m;++i){
         a[t+1][i-1]='.';
      }
      for(int i=1;i<=m;++i){
         vis[{t+1,i}]=false;
      }
      dfs(t+1,1);
   }
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