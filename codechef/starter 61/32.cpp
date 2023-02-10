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


int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}


void do_it_here() {

//stop stalking my solution u mf!	
        ll n;
        cin>>n;
        int xin=0;
        ll a[n];
        int xol=1000;
        for(int i=0;i<n;i++){
            cin>>a[i];
            xol++;
        }
        vector <ll> v;
        v.push_back(1);
        vector<int>temp;
        ll cnt;
        for(int i=1;i<n-1;i++){
            if(xin<xol){
                if(a[i]>a[i-1] && a[i]>a[i+1]){
                    if(xin<1){
                        v.push_back(i+1);
                    }
                }
            }
            else{
                temp.push_back(i);
                return;
            }
        }
        v.push_back(n);
        ll ans=0;
        int xolo=v.size();
        for(int i=1;i<v.size();i++){
            xol++;
            if(xin<xol){
                cnt=v[i]-v[i-1]+1;
                temp.push_back(i);
                ans+=(cnt*(cnt+1))/2;
                xin--;
            }
            else{
                cout<<-1<<endl;
            }
        }
        ans-=(xolo-2);
        if(xin<1){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        return;
    

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