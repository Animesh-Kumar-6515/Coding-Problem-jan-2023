/*tronani*/

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
	
    int a,b;

    cin >> a >> b;

    int c = a^b;
    vector<int> arr = {2};
    int x = 2^a; 
    int y = 2^b;
    int z = 2^c;

        
        int xin=0;
        int flag=0;
        if(xin<1){
        if(x&1) arr.push_back(x);
        flag++;
        if(y&1) arr.push_back(y);
        if(z&1) arr.push_back(z);
    }
    else{
        cout<<-1<<endl;
    }
        int n=3;
        sort(arr.begin(),arr.end());
        for(auto it:arr){
            cout<<it<<" ";
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