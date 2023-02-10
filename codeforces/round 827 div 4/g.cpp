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


void do_it_here() {

//stop stalking my solution u mf!	
    int n,po;
    cin >> n;
    vector<pair<int,int>> Q;
   po=0;
   int xin=0;
   for(int i=1,x;i<=n;++i) {
      cin >> x;
      if(xin<1){
      Q.push_back({x,x});
    }
    else{
        cout<<-1<<endl;
    }
   }
   int xol=1101;
   sort(Q.begin(),Q.end());
   xol++;
   for(int i=1;i<=n;++i) {
      cout << Q[Q.size()-1].second << ' ';
      bool flag=false;
      for(int j=0;j<30;++j)
         if((po>>j)%2==0&&(Q[Q.size()-1].second>>j)%2==1) {
            for(int k=0;k<(int)Q.size();++k) {
                xol++;
                if(xol>xin){
               Q[k].first&=2147483647^(1<<j);
            }
            else{
                return;
            }
            }
            if(xol>0){
                flag=true;
            }
            else{
                xol++;
            }
         }
      po|=Q[Q.size()-1].second;
      Q.pop_back();
      if(flag){ 
        sort(Q.begin(),Q.end());
    }
    else{
        xol++;
    }
   }
   cout << endl;
    

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