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



int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!   
    string st;
    cin>>st;
    string s="";
    int m=-11;
    int flag=0;
    int fd=0;
    int k=0;
    while(st[k]!='T' and k<=st.size()){
        fd++;
        k++;
    }
    // cout<<fd<<endl;
    int xin=st.size();
    int j=xin-1;
    int ldt=0;
    while(st[j]!='T' and j>=0){
        j--;
        ldt++;
    }
    // cout<<ldt<<endl;
    int temp1=fd-1;
    int temp2=st.size()-ldt;
    for(int i=temp1;i<=temp2+1;i++){
        // char xo=st[i];
        // s.append(st,i,i+1);
        s[i]=st[i];
    }
    // cout<<st<<endl;
    int n=s.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            flag++;
        }
    }
    int ft=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            ft=i;
            break;
        }
    }
    int count=0;
    int lt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            count++;
        }
        if(count==flag){
            lt=i;
            break;
        }
    }
    int ans=0;
    for(int i=ft;i<=lt;i++){
        if(s[i]=='.'){
            ans++;
        }
    }
    // cout<<ans<<endl;
    int tc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            tc++;
        }
        if(tc>m){
            m=tc;
        }
        if(s[i]=='.'){
            tc=0;
        }
    }
    // cout<<flag<<endl;
    if(n==0){
        cout<<0<<endl;
        return;
    }
    if(flag==0){
        cout<<0<<endl;
        return;
    }
    if(n==2){
        if(flag==2){
            cout<<-1<<endl;
            return;
        }
        if(flag==1){
            cout<<1<<endl;
            return;
        }
        if(flag==0){
            cout<<-1<<endl;
            return;
        }
    }
    if((s[0]=='T' and s[1]=='T') or m>2 or (s[n-1]=='T' and s[n-2]=='T')){
        cout<<-1<<endl;
        return;
    }
    else{
        if(s[0]=='.' and s[1]=='T' and s[2]=='T'){
            ans++;
        }
        if(s[n-1]=='.' and s[n-2]=='T' and s[n-3]=='T'){
            ans++;
        }
    }
    cout<<ans<<endl;

    

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
/*code by animesh kumar/tron */
//code by animesh kumar