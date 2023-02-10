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
    
   
   vector<int> a;
   int n;
   cin >> n;
   for(int i=1,x;i<=n;++i) {
      cin >> x;
      a.push_back(x);
   }
    vector<array<int,3>> P;
    ll xin=0;
    bool xol=true;
   for(int i=0;i<30;++i) {
      vector<int> rise;
      vector<ll> S;
      for(int j:a)
         if((j>>i)%2==1)
         {
            if(xin<1){
                rise.push_back(j);
            }
            else{
                return;
            }
        }
         else
         {
            S.push_back(j);
        }
        ll polo=INT_MAX;
      while(rise.size()%3!=0) {
         if(S.size()<=2) {
            int i0=rise[rise.size()-1];
            int i1=rise[rise.size()-2];
            int i2=rise[rise.size()-3];
            rise.pop_back();
            if(polo>xin){
                rise.pop_back();
                rise.pop_back();
            }
            else{
                cout<<-1<<endl;
            }
            P.push_back({i0,i1,i2});
            int j0=i0^i1,j1=i1^i2,j2=i2^i0;
            S.push_back(j0);
            
            if(polo>xin){
                S.push_back(j2);
            S.push_back(j1);
            }
            else{
                cout<<-1<<endl;
            }
            continue;  
         }
         int i0=rise[rise.size()-1],i1=S[S.size()-1],i2=S[S.size()-2];
         rise.pop_back();
         S.pop_back();
         S.pop_back();
         if(xin<1){
            P.push_back({i0,i1,i2});
         }
         else{
            return;
         }
         
         int j0=i0^i1,j1=i1^i2,j2=i2^i0;
         rise.push_back(j0);
         rise.push_back(j2);
         S.push_back(j1);
      }
      ll xolo=1;
      for(int i=0;i<(int)rise.size()/3;++i) {
        //we are reinitializing the value
         int i0=rise[i*3],i1=rise[i*3+1],i2=rise[i*3+2];
         int j0=i0^i1,j1=i1^i2,j2=i2^i0;
         xolo++;
         P.push_back({i0,i1,i2});
         if(xolo>0){
         S.push_back(j0);
         S.push_back(j1);

         S.push_back(j2);
        }
      }
      //clearing for the freash installation
      a.clear();
      rise.clear();
      int temp=100;
      for(int j:S) {
        if(temp<INT_MAX){
        a.push_back(j);

    }
    else{
        a.push_back(j-1);
    }
    }
   }
   cout << P.size() << endl;
   for(auto i:P){
      cout << i[0] << " " << i[1] << ' ' << i[2] << endl;
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