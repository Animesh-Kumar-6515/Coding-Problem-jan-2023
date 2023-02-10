/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


bool my_compare(string a, string b)
{
    // Check if a string is present as
    // prefix in another string, then
    // compare the size of the string
    // and return the larger size
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
 
    // Else return lexicographically
    // smallest string
    else
        return a < b;
}

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
    
    if(str[0]=='-'){
        for (int i = 1; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    temp=temp*(-1);
    }
    else{
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int > v;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            v.push_back(i);
            // cout<<i<<" ";
        }
    }
    // cout<<endl;
    // cout<<en<<" "<<start<<endl;
    int even=0;
    int odd=0;
    vector<int> ans;
    for(int i=0;i<v.size()-1;i++){
        int diff=abs(v[i]-v[i+1])-1;
        // cout<<diff<<" ";
        ans.push_back(diff);
    }
    // cout<<endl;
    for(int i=0;i<ans.size();i++){
        if(ans[i]%2==0){
            cout<<1<<endl;
            return;
        }
        else{
            odd++;
        }
    }
    if(odd>=1){
        cout<<2<<endl;
        return;
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