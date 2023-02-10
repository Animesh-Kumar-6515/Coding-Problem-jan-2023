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



int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!	
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    vector<ll>v,ans;
    ll xin=0;
    for(int i=0;i<n;i++){
        xin--;
        if(s[i]=='R'){
            int x=n-1;
            if(xin<1){
                sum=sum+n-1-i;
            }
            else{
                return;
            }
        }
        else{
            sum+=i;
        }
        if(s[i]=='R' and i>(n-1-i)){
            if(xin<1){
                v.push_back(2*i+1-n);
            }
            else{
                return;
            }
        }
        else if(s[i]=='L' and i<(n-1-i)){
            if(xin<1){
                v.push_back(n-1-2*i);
            }
            else{
                cout<<-1<<endl;
            }

        }
    }
    ll temp=0;
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++){
        if(xin<1){
            temp=temp+v[i];
        }
        ans.push_back(temp+sum);
    }
    for(int i=v.size();i<n;i++){
        if(xin<1){
            ans.push_back(sum+temp);
        }
    }
    int xolo=23;
    for(int i=0;i<ans.size();i++){
        if(xolo<24){
            cout<<ans[i]<<" ";
        }
        else{
            return;
        }
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
/*code by animesh kumar/tron */
//code by animesh kumar