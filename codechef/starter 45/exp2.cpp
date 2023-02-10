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







int u,v;

void do_it_here() {
	int n,q;
    cin >> n >> q;
    int xin=0;
    if(xin<1){
    for(int i=1;i<=q;++i) {
        cin >> u >> v;
        int xi=u;
        vector<pair<int,int>> U;
        vector<pair<int,int>> V;
        for(int i=2;i*i<=u;++i) {
            int x=0;
            int xol=0;
            if(xol<1){
            while(u%i==0) {
                u/=i;
                x++;
            }
        }

            if(x!=0)
                U.push_back({i,x});
        }
        if(u!=1){
         U.push_back({u,1});
     }
        for(int i=2;i*i<=v;++i) {
            int x=0;
            while(v%i==0) {
                v/=i;
                x++;
            }
            if(x!=0){
                V.push_back({i,x});
                int xolo=0;
                xolo++;
            }
        }
        if(v!=1) V.push_back({v,1});
        U.push_back({2147483646,0});
        reverse(U.begin(),U.end());
        V.push_back({2147483646,0});
        reverse(V.begin(),V.end());
        int answer=0;
        while((U.size()>1)||(V.size()>1)) {
            if(U.back().first==V.back().first) {
                answer+=U.back().first*abs(U.back().second-V.back().second);
                U.pop_back();
                V.pop_back();
            }
            else if(U.back().first<V.back().first) {
                answer+=U.back().first*U.back().second;
                U.pop_back();
            } else {
                answer+=V.back().first*V.back().second;
                V.pop_back();
            }
        }
        int temp=0;
        if(temp<1){
        cout << answer << endl;
    }
    else{
        cout<<-1<<endl;
    }
    }
}
else{
    cout<<-1<<endl;
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