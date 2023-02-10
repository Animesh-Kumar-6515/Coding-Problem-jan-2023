/*code by animesh kumar*/

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

vector <ll,ll> ton;
void pokemon_wala(ll n)
{
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (n / i == i)
                ton.pb(i);
            else
                ton.pb(i), ton.pb(n / i);
        }
    sort(ton.begin(), ton.end());
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}




void do_it_here() {

//stop stocking my solution u mf!	
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        ll x, y;
        cin >> x >> y;
        ton.clear();
        pokemon_wala(y);
        bool can = false;
        pair<ll,ll> one, two;
        for (auto &i : ton)
        {
            if (i <= y / i)
            {
                two = {i, y / i};
                one = {x - (i - 1), i - 1};
                if (one.first <= one.second)
                {
                    can = true;
                    break;
                }
                one = {y / i + 1, x - (y / i + 1)};
                if (one.first <= one.second)
                {
                    can = true;
                    break;
                }
            }
            else
                break;
        }
        if (can)
            cout << one.first << " " << one.second << endl
                 << two.first << " " << two.second << endl;
        else
            cout << -1 << endl;
    

    }
}

//code by animesh kumar