#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


// int primeornot(int n){
//  int flag=0;
//  for(int i=0;i*i<=n;i++){
//      if(n%i==0){
//          flag++;
//          if(i!=n/i){
//              flag++;
//          }
//      }
//  }
//  return flag;
// }


// code to find all the prime number in a range n
// this is SIEVE OF ERATHOSTHEMES algorithm


// int n;
// cin>>n;
// vector<int>prime(n+1,1);

// prime[1]=0;
// for(int i=2;i<=n;i++){
//  if(!prime[i])continue;
//  for(int j=i*i;j<=n;j+=i){
//      prime[j]=0;
//  }
// }



// int gcd(int a,int b){
//  if(a==0){
//      return b;
//  }
//  return gcd(b%a,a);
// }









void do_it_here() {
    
    int n;
    cin>>n;
    int arr[n];
    int max=0,min=200,max_pos=0,min_pos=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            max_pos=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            min_pos=i;
        }
    }
    // cout<<min_pos<<" "<<max_pos<<endl;
    if(min_pos>max_pos){
        int sum=(n-(min_pos+1))+(max_pos);
        cout<<sum<<endl;
    }
    else{
        int sum=(n-(min_pos+1))+(max_pos)-1;
        cout<<sum<<endl;
    }
    // int sum=(n-(min_pos+1)-1)+(max_pos-1);
    // cout<<sum<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    // cin >> testcas;
    
    // for (int t = 1; t <= testcas; t++) {
        do_it_here();
    // }
}