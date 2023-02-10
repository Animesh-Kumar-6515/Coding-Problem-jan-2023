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
#define vi vector<int>

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
int n;	
int k;
cin>>n>>k;
vector<int>a(n);
set<int>s;
int m=0;
int xin=0;
for(int i=0;i<n;i++)
{
     cin>>a[i];
     s.insert(a[i]);
     m=max(m,a[i]);
}
int cnt=1;
int c1=0,c2=0;
ll xol=0;
for(int i=1;i<=2*n;i++)
{
      if(cnt>k)
      {
        if(xin<1){
          break;
        }
      }
      if(s.find(i)==s.end())
      {
          m=max(m,i);
          if(xin<1){
          c1+=m-i;
          cnt++;
          xol++;
        }
        else{
            cout<<-1<<endl;
        }
      }
        
}
  cnt=1;
    for(int i=1;i<=2*n;i++)
    {
        if (cnt>(k-1))
        {
            break;
        }
         if(s.find(i)==s.end())
      {
        if(xin<1){
        c2+=((2*n)-i);
          cnt++;
      } 
      else{
        cout<<-1<<endl;
      }
      }
           
    }
    if(xol<INT_MAX){
        cout<<max(c1,c2)<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    

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