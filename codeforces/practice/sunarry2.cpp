/*code by animesh kumar/tron */

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

/*code by animesh kumar/tron */

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

// CODE TO CONVERT STRING TO INT
// string s=v[k-1];
// int l=s.size();
// int ten=pow(10,l-1);
// int sum=0;
// // cout<<l<<endl;
// for(int i=0;i<l;i++){
//     // cout<<int(s[i])<<endl;
//     sum=sum+(int(s[i])-48)*ten;
//     ten=ten/10;

// }
// return sum;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!   
    // for int if(i=0;i<n;i++){
    //     if(we hab=ve to inpi=ut ia  length of the array iit to the inputed string to make the inputthe array to make the tin
    //         if the input is of anme )
    // }
    ll temp1=1000000000000000000;
    ll temp2=-1000000000000000000;
    int n;
    cin>>n;
    vector<ll> arr;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        arr.push_back(x);
    }
    ll mi=arr[0];
    ll mx=arr[0];
    ll bs=arr[0];
    ll mbs=arr[0];
    for(int i=0;i<n;i++){
        
        mi=min(arr[i],mi);
        mx=max(arr[i],mx);
        bs=min(bs,abs(arr[i]));
        
        // mi=min(mi*mx,bs*bs);
        mbs=max(mbs,abs(arr[i]));

    }
    ll fmn=0;
    ll fmx=0;
    fmn=min(mi*mx,bs*bs);
    fmx=mbs*mbs;
    temp1=min(temp1,fmn);
    temp2=max(temp2,fmx);
    // if(mi<0){
    //     if(mx>=0){
    //         fmin=mi*mx;
    //         fmax=mx*mx;
    //         fmax=max(fmax,(mi*mi));
    //     }
    //     else{
    //         fmin=mx*mx;
    //         fmax=mi*mi;
    //     }
    // }
    // else{
    //     fmin=mi*mi;
    //     fmax=mx*mx;
    // }
    // for()
    cout<<temp1<<" "<<temp2<<endl;

    

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