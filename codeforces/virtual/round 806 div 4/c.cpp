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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin>>x>>s;
        int flag=arr[i];
        // cout<<"YES"<<endl;
        for(int j=0;i<s.size();j++){
            if(s[j]=='U'){
                if(flag==0){
                    flag=9;
                }
                else{
                    flag--;
                }
            }
            if(s[j]=='D'){
                if(flag==9){
                    flag=0;
                }
                else{
                    flag++;
                }
            }
        }
        cout<<"YES"<<endl;
        v.push_back(flag);
        cout<<flag<<endl;
    }
    for (auto element : v) {
        cout << element <<" ";
    }
    cout<<endl;
    cout<<"YES"<<endl;

    

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