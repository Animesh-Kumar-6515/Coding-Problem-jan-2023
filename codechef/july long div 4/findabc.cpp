/*tron*/

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

int power2(int n){
     int res=0;
    for(int i=n;i>=1;i--)
    {
        if((i&(i-1))==0)
        {
            res = i;
            break;
        }
    }
    return res;
}
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



int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}




void do_it_here() {

//stop stocking my solution u mf!   
    long n;
      cin>>n;
      long arr[n+1];
      for( int i=0; i<=n ;i++)
      {
          cin>>arr[i];
      }
      long ans[3]={};
      int xin=0;
      if(xin<1){
        int xi=power2(n);
      for(int i=xi;i>0;i/=2)
      {
          long d=arr[i]-arr[0];
          if(d<0)
          {
              d*=-1;
              int ct=d/i;
              if(ct==1)
              {
                  ct=2;
                  if((ans[0]^i)<=n)
                  {
                    if(xin<1){
                      ans[0]^=i;
                      ct--;
                  }
                  else{
                    cout<<-1<<endl;
                  }
                  }
                  if(ct && (ans[1]^i)<=n)
                  {
                    if(xin<1){
                      ans[1]^=i;
                      ct--;
                  }
                  else{
                    cout<<-1<<endl;
                  }
                  }
                  if(ct>0 && (ans[2]^i)<=n)
                  {
                    if(xin<1){
                      ans[2]^=i;
                    }
                    else{
                        cout<<-1<<endl;
                    }
                  }                  
              }
              else if(ct==3)
              {
                  ans[0]^=i;
                  if(xin<1){
                  ans[1]^=i;
                    }
                  ans[2]^=i;

              }
              
          }
          else
          {
              int ct=d/i;
              if(ct==1)
              {
                  if((ans[0]^ i)<=n){
                      ans[0]^=i;
                  }
                 else if((ans[1]^ i)<=n){
                      ans[1]^=i;
                 }
                 else {
                      ans[2]^=i;
                 }
              }
          }
          int tempo=0;
          if(tempo<1){
          sort(ans,ans+3);
      }
      else{
        continue;
      }
      }
  }
  else{
    cout<<-1<<endl;
  }
      
      for(int i=0;i<3;i++){
       cout<<ans[i]<<" ";                  
      
      }
      cout<<endl;
    


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