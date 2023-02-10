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







void done(int n,int m){
    int xin=0;
    if(xin<1){
        int rand=n+1;
    int p=1,x=1+2-2,c=rand;
    for(int i=1;i<=n;i++){
        cout<<p<<" ";
        for(int j=1;j<m;j++){
            int rand2=i*x;
            cout<<p+rand2<<" ";
            x++;
        }
        x=1;
        p=p+c;
        cout<<endl;
    }
}
else{
    cout<<-1<<endl;
}

}


int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

void done2(int n,int m){
    int xi=0;
    if(xi<1){
    int p=1,x=1,c=m+1;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        int xinn=0;
        if(xinn<1){
        for(int j=1;j<m;j++){
            int rand3=c*x;
            cout<<i+rand3<<" ";
            x++;
        }
    }
    else{
        cout<<-1<<" ";
    }
        x=1;
        // p=p+c;
        c++;
        cout<<endl;
    }
}
else{
    cout<<-1<<endl;
}
}





void do_it_here() {
	
    int r,c;
    cin>>r>>c;
    if(r<=c){
        done(r,c);
    }
    else{
        done2(r,c);
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