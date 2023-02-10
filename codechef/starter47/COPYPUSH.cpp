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

bool solve( string str){ 
    if(str.size() == 0 || str.size() == 1) return true; 
    if(str.size()%2 != 0){ 
        return solve(str.substr(0,str.size() -1)); 
    } 
    if(str.substr(0,str.size()/2) == str.substr(str.size()/2,str.size())){ 
        return solve(str.substr(0,str.size()/2)); 
    } 
    return false; 
}


void do_it_here() {

//stop stocking my solution u mf!
int n;	
    cin >> n; 
        string str; 
        cin >> str; 
        if(n == 0 || n== 1){ 
            cout << "YES" << endl; 
            continue;
        } 
        bool op = solve(str); 
        if(op) cout << "YES" << endl; 
        else cout << "NO" << endl; 

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