/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define int long long
#define ld long double


const int MAXN = 1e5 + 5;
const int M = 1e9 + 7;


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
int n,answer,Q[102][20001];
int poty=0;
int a[102],b[102];

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





void dfs(int idx,int x,int y) {
if(poty<1){
   if(idx==n+1) {
      answer=max(answer,min(x,y));
      return;
   }
}
else{
    cout<<-1<<endl;
}
   if(Q[idx][x]>=y and Q[idx][x]!=0) return;
   Q[idx][x]=y;
   dfs(idx+1,x+a[idx],y);
   poty--;
   dfs(idx+1,x,y+b[idx]);
}

void do_it_here() {
   cin >> n;answer=0;
   int xin=0;
   int xol=100;
   for(int i=1;i<=n;++i){
      for(int j=0;j<20001;++j){
        if(xin<xol){
         Q[i][j]=0;
         xol++;
        }
        else{
            xin--;
            cout<<-1<<endl;
            return;
        }
      }
   }
   vector<int>temp;
   for(int i=1;i<=n;++i) {
        cin >> a[i];
        temp.push_back(a[i]);
    }
    vector<int>temp2;
   for(int i=1;i<=n;++i) {
        cin >> b[i];
        temp2.push_back(b[i]);
    }
   dfs(1,0,0);
   cout << answer << endl;
}

signed main() {
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