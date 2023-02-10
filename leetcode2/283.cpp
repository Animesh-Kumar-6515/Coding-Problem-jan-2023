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

// CODE TO CONVERT STRING TO INT
int string_to_int(string s){
// string s=v[k-1];
int l=s.size();
int ten=pow(10,l-1);
int sum=0;
// cout<<l<<endl;
for(int i=0;i<l;i++){
    // cout<<int(s[i])<<endl;
    sum=sum+(int(s[i])-48)*ten;
    ten=ten/10;

}
return sum;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here(vector<int>arr) {

//stop stalking my solution u mf!	
    vector<int>v;
        int flag=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                v.push_back(arr[i]);
                // flag++;
            }
        }
        // int zero=arr.size()-flag;
        for(int i=0;i<v.size();i++){
            arr[i]=v[i];
        }
        for(int i=v.size();i<arr.size();i++){
            arr[i]=0;
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        vector<int>arr={1 ,0,2,3,0};
        do_it_here(arr);

    }
}
/*code by animesh kumar/tron */
//code by animesh kumar