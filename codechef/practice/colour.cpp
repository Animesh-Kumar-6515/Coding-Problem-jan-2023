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
// string s=v[k-1];
// int l=s.size();
// int ten=pow(10,l-1);
// int sum=0;
// // cout<<l<<endl;
// for(int i=0;i<l;i++){
//     // cout<<int(s[i])<<endl;
//     sum=sum+(int(s[i])-48)*ten;
//     ten=ten/10;

// }
// return sum;

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!	
    int x,y,z;
    cin>>x>>y>>z;
    int flag=0;
    // if(x>1 and y>1 and z>1){
    //     cout<<6<<endl;
    // }
    // else if((x>1 and y>1 and z==1) or (x==1 and y>1 and z>1) or (x>1 and y==1 and z>1)){

    //     cout<<4<<endl;
    // }
    // else if()

    // cout<<x<<" "<<y<<" "<<z<<endl;
    if(x!=0){
        flag++;
        x--;
    }
    // cout<<x<<" "<<y<<" "<<z<<endl;
    if(y!=0){
        flag++;
        y--;
    }
    // cout<<x<<" "<<y<<" "<<z<<endl;
    if(z!=0){
        flag++;
        z--;
    }
    // cout<<x<<" "<<y<<" "<<z<<endl;
    // int temp=max(y,z);
    if(x!=0){
        if(y!=0){
            flag++;
            x--;
            y--;
        }
    }
    // cout<<x<<" "<<y<<" "<<z<<endl;
    if(x)
    if(x!=0 and z!=0){
            flag++;
            x--;
            z--;
    }
    // cout<<x<<" "<<y<<" "<<z<<endl;
    if(y!=0 and z!=0){
        flag++;
        y--;
        z--;
    }
    // cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<flag<<endl;
    // while()

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