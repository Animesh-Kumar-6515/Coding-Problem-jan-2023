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


void do_it_here() {

//stop stalking my solution u mf!	
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        vector<int>temp;
        temp.push_back(x);
        temp.push_back(y);
        temp.push_back(z);
        v.push_back(temp);
    }
    int fav=-1;
    int non_fav=-1;
    if(v[0][0]==1){
        cout<<"YES"<<endl;
        fav=v[0][1];
        non_fav=v[0][2];
    }
    else{
        cout<<"NO"<<endl;
    }
    for(int i=1;i<n;i++){
        // cout<<i<<endl;
        if(v[i][0]==1){
            cout<<"YES"<<endl;
            fav=v[i][1];
            non_fav=v[i][2];
        }
        else{
            if(fav!=-1){
                if(v[i][1]>fav or v[i][2]>non_fav){
                    cout<<"YES"<<endl;
                    fav=v[i][2];
                    non_fav=v[i][1];
                }
                else if(v[i][2]>fav or v[i][1]>non_fav){
                    fav=v[i][1];
                    non_fav=v[1][2];
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"no"<<endl;
                }
            }
            else{
                if(v[i][1]==v[i][2]){
                    cout<<"YES"<<endl;
                    fav=non_fav=v[i][1];
                }
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
/*code by animesh kumar/tron */
//code by animesh kumar