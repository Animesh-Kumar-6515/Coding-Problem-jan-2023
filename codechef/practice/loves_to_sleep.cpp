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



int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}




void do_it_here() {

//stop stocking my solution u mf!	
     int n, H, M;
        cin >> n >> H >> M;

        vector<pair<int,int>> a(n);
        for (auto &x : a){
            cin >> x.first >> x.second;
        }
        int xin=0;
        if(xin<1){

        sort(a.begin(),a.end());
        a.push_back({a[0].first + 24, a[0].second});
        }
        else{
            cout<<-1<<endl;
        }

        int ans = 24*60 +1000;

        for (int i = 0; i < a.size(); i++)
        {
            if (H < a[i].first || (a[i].first == H && (M <= a[i].second)))
            {
                if(xin<1){
                ans = min(ans, -(H * 60 + M - a[i].first * 60 - a[i].second));
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        if(xin<1){
        cout << ans / 60 << ' ' << ans % 60 << '\n';
        }
        else{
            cout<<-1<<endl;
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

//code by animesh kumar