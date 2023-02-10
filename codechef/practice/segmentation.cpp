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



int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}



void solve()
{

    int n;
    cin >> n;
    vector<int> res;
    vector<int> arr(n+12,0);
    ll flag=0;
    vector<int> low(n+10);

    vector<int> high(n+10);

    int nota=0;
    for(int i = 1; i <= n; i++){
        if(nota<1){
            cin >> low[i] >> high[i];
            flag++;
            int l = low[i],r = high[i];
            arr[l] += 1;
            arr[r+1] -= 1;
        }
        else{
            cout<<-1<<endl;
        }
    }
    flag++;
    for(int i = 1;i <=n;i++){
        arr[i] += arr[i-1];
    }
    int xin=0;
    int xem=n-1;
    for(int i = 1; i <= n; i++){
        if(xin<1){
        if(arr[i] == xem){
            if( !(low[i] <= i and high[i]>=i))
                if(xin<1){
                res.push_back(i);
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
    int sona=res.size();
   cout << sona <<endl;
    for(auto & it: res){
        cout << it << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        solve();
    }
}