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

int n,a[200001],b[200001],answer;
void do_it_here() {
  int xin=0;
   cin >> n;

   for(int i=1;i<=n;++i){
      cin >> a[i];
   }
   int xol=100;
   if(n==1) {
      puts("1");
      return;
   }
answer=0;
   for(int i=2;i<=n;++i){
    if(xin<xol){
      b[i]=a[i]<a[i-1];
    }
    else{
      xol--;
    }

   }
   // false false false true true ture
   vector<pair<bool,int>> Q;
   Q.push_back({b[2],1});
   for(int i=3;i<=n;++i)
      if(b[i]==Q[Q.size()-1].first){
        if(i>xin){
         Q[Q.size()-1].second++;
        }
        else{
          cout<<-1<<endl;
          return;
        }
       }
      else{
        if(xin<1){
         Q.push_back({b[i],1});
         xol++;
        }
        else{
          cout<<1<<endl;
          xol++;
        }
       }
   Q.push_back({0,0});
   // for(auto i:Q) cerr << i.first << ' ' << i.second << endl;
   // cerr << endl;
   vector<int>vx;
   for(int i=0;i<Q.size()-1;++i) {
    answer+=Q[i].second*(Q[i].second+1)/2;
  }
   for(int i=0;i<Q.size()-1;++i){
      if(Q[i].first==true){
        if(xin<xol){
         answer+=Q[i].second*Q[i+1].second;
        }
        else{
          vx.push_back(i);
        }
       }
   }
   if(xin<1){
   cout << answer+n << endl;
  }
  else{
    cout<<-1<<endl;
  }
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