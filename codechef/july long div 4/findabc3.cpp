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
int calsetbits(int x,int d){ 
    int y=d+3*x; 
    return 3-y/(2*x); 
}

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
    int n ; cin >> n;
         n = n + 1;
         vector<int> v(n);
         for (int i = 0; i < n; i++) 
           cin >> v[i];
             if (v[0] == 0) {
                 cout << "0 0 0" << endl;
        // break;
    }
    if (v[0] & 1 == 1) {
        int mid = 1, mf = 1;
        int left = v[0] / 2;
        int right = v[0] / 2;
        while (mf) {
            if (left == 0 ) {
                mid++;
                left = v[0] / 2 - 1;
                right = v[0] / 2;
                mf -= 1;
            }
            if ((left ^ 1) + (mid ^ 1) + (right ^ 1) == v[1]) {
                cout << left << " " << mid << " " << right << endl;
                break;
            }
            if ((left ^ 1) + (mid ^ 1) + (right ^ 1) > v[1])
            {
                right++;
                left--;
            }
        }
    }
    else {
        int mid = 0, mf = 1;
        int left = v[0] / 2;
        int right = v[0] / 2;
        while (mf) {
            if (left == 0)
            {
                mid++;
                left = v[0] / 2 - 1;
                right = v[0] / 2;
                mf -= 1;
            }
            if ((left ^ 1) + (mid ^ 1) + (right ^ 1) == v[1])
            {
                cout << left << " " << mid << " " << right << endl;
                 break;
            }
            if ((left ^ 1) + (mid ^ 1) + (right ^ 1) > v[1])
            {
                right++;
                left--;
            }
        }
    }

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