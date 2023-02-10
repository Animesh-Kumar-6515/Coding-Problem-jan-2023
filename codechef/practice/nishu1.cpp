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
    vector<int>l;
    vector<int>r;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        r.push_back(x);
    }
    int maxi=0;
    vector<int>rf;
    for(int i=0;i<n;i++){
        int temp=l[i]*r[i];
        v.push_back(temp);
        if(temp>=maxi){
            maxi=temp;
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==maxi){
            rf.push_back(r[i]);
        }
    }
    int mini=0;
    for(int i=0;i<rf.size();i++){
        if(rf[i]>=mini){
            mini=rf[i];
        }
    }
    for(int i=0;i<n;i++){
        if(r[i]*l[i] == maxi){
            if(r[i]==mini){
                cout<<i+1<<endl;
                return;
            }
        }
    }
    // cout<<"yes"<<endl;
    

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