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




bool check(string s){
    // int temp1=x-1;
    // int temp2=y-1;
    int flag=0;
    unordered_map<char,int>d;
    for(char i : s)
    {
        d[i]++;
    }
    for(char i : s)
    {
    // Print only if this
    // character is not printed
    // before
    if(d[i] != 0)
    {
      if(d[i]%2==1){
        flag++;
      }
      d[i] = 0;
    }
  }
  if(flag>1){
    return false;
  }
  else{
    return true;
  }
}




void do_it_here(int t) {
	
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<q;i++){
        int xin,nota;
        cin>>xin>>nota;
        string st="";
        for(int i=xin-1;i<=nota-1;i++){
            st=st+s[i];
        }
        if(check(st)){
            flag++;
        }
    }
    cout<<"Case #"<<t<<": "<<flag<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here(t);
    }
}