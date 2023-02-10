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




bool find(vector<int> v,int x){
    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i]==x){
            return true;
        }

    }
    return false;
}

bool find2(int arr[],int x){
    int size = *(&arr + 1) - arr;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}


void do_it_here() {
    
    int n;
    cin>>n;
    int arr[n];
    int pos=0,neg=0,zero=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            pos++;
        }
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]==0){
            zero++;
        }
    }
    // cout<<pos<<" "<<neg<<"  "<<zero<<endl;
    if(pos>2 or neg>2 or zero<=0){
        cout<<"NO"<<endl;
    }
    else{
        if(zero>1){
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                v.push_back(arr[i]);
            }
        }
        v.push_back(0);
        int l=v.size();
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                for(int k=j+1;k<l;k++){
                    int temp=v[i]+v[j]+v[k];
                    if(find(v,temp)){
                        continue;
                    }
                    else{
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int temp=arr[i]+arr[j]+arr[k];
                    // cout<<temp<<endl;
                    int xin=0;
                    for(int i=0;i<n;i++){
                        if(arr[i]==temp){
                            xin++;
                        }
                    }
                    if(xin>0){
                        continue;
                    }
                    else{
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    }

    // else{
    //     cout<<"NO"<<endl;
    // }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        // cout<<t<<endl;
        do_it_here();
        // cout<<t<<endl;
    }
}