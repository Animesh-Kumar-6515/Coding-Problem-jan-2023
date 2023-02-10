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
int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
 
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */

int arr[200001],persum[200001],permax[200001];
void do_it_here() {

//stop stalking my solution u mf!	
    int n,q;
    cin>>n>>q;
    // int arr[n];
    int ques[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        persum[i]=persum[i-1]+arr[i];
      permax[i]=max(permax[i-1],arr[i]);
    }
    for(int i=0;i<q;i++){
        cin>>ques[i];
        cout<< persum[upper_bound(permax+1,permax+1+n,ques[i])-permax-1] << ' ';
    }
    cout<<endl;
    // vector<int>v;
    // for(int i=0;i<q;i++){
    //     for(int j=0;j<n;j++){
    //         int ans =0;
    //         if(ques[i]>=arr[j]){
    //             ans
    //         }
    //     }
    // }
    

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