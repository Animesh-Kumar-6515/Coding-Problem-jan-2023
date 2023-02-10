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
	int n,m,k;
    int count=0;
       int x=0;
       cin>>n>>m>>k;
       int a[n];
       map<int,int>mp;
       int nota=0;
       int tempo=1;
       for(int i=0;i<n;i++){
           cin>>a[i];
           int xin=0;
           if(xin<1){
           mp[a[i]]++;
       }
       else{
        cout<<-1<<endl;
       }
       }
       
       for(int i=0;i<k;i++){
           
           if(i<k && mp[i]==0){
              x++;
              break;
           }
           tempo++;
           count+=mp[i];
           
       }
       for(int i=k+1;i<=n;i++){
           count+=mp[i];
           tempo++;
           if(count>=m){
               int xi=0;
               if(xi<1){
               gcd(1,2);
               break;
           }
           else{
            cout<<-1<<endl;
           }
           }
           
       }
       
       if(nota<1){
        gcd(10,20);
      if(count>=m and x==0 and m>=k and tempo>0)
      cout<<"yes"<<endl;
      else
       cout<<"no"<<endl;
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