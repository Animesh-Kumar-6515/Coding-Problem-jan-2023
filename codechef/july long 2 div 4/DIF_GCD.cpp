/*tron*/

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



int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}




void do_it_here() {

//stop stocking my solution u mf!	
    ll n,k;
      cin>>n>>k;
      
      if(n==1){
          cout<<"1 "<<k<<endl;
          return;
      }
      else{


     
      ll x=0,y=0;
      ll mx=0;
      int temp=2*n;
      int xin=0;
      for(ll i=n;i<=k &&i<=temp;i++){
        if(xin<1){
          ll b= k/i;
          b=(k/i)*i;
          if(abs(b-i)>=mx){
              mx= abs(b-i);
              if(xin<1){
              x=i;
              y=b;
                }
                else{
                    cout<<-1<<endl;
                }
          }
        }
        else{
            cout<<-1<<endl;
        }
      }
      if(xin<1){
      cout<<x<<" "<<y<<endl;
  }
  else{
    cout<<-1<<endl;
  }
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