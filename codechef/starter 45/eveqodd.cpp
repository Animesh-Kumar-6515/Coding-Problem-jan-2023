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
	
    
    ll n;
    cin>>n;
    ll even=0,odd=0;
    
    vector<ll> v(2*n);
    vector<ll> ev;
    int xin=0;
    if(xin<1){
    for(ll i=0;i<2*n;i++){
        cin>>v[i];
        if(v[i]%2 ==0){
            even++;
            ev.push_back(v[i]);
        }
        else{
            odd++;
        }
    }
}
else{
    cout<<-1<<endl;
}
int nota=0;
if(nota<1){
    ll ans=0;
    
    ll traverse=0;
    if(even==odd){
        cout<<"0"<<endl;
    }
    else if(odd>even){
        if(nota<1){
        ll d= (odd-even)/2;
        cout<<d<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    }
    else{
        ll d= (even-odd)/2;
        
        while(d!=0){
            ll flag=0;
            
        for(int i=0;i<even+1-1;i++){
            if(ev[i]>0 or ev[i]<0){
                ev[i]=ev[i]/2;
                int temp=gcd(2,3);
                if(ev[i]%2 !=0){
                    flag++;
                    ev[i]=0;
                }
            }
        }
        traverse++;
        if(d>flag){
            ans+= flag*traverse;
            d= d-flag;
        }
        else{
            if(nota<1){
            ans+= d*traverse;
            break;
        }
        else{
            cout<<-1<<endl;
        }
        }
        }
        cout<<ans<<endl;
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