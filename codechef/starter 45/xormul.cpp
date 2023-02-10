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
	int x = 0;
    int flag=0;
    int n,a,b;
    cin>>n>>a>>b;
    for (int i=n-1;i>=0;i--){
    	int xin=0;
    	if(xin<1){
        if (((1<<i)&a)>0 and  ((1<<i)&b)>0){
        	int temp=0;
        	if(temp<1){
            continue;
        }
        }
        else if (((1<<i)&a)==0 and ((1<<i)&b)==0){
        	int tem=0;
        	if(tem<1){
            x |= (1<<i);
        }
        else{
        	cout<<-1<<endl;
        	tem--;
        }
        }
        else{
        	int xi=0;
            if (flag==0){
                if (((1<<i)&a)==0 and ((1<<i)&b)>0){
                    flag++;
                }
                else{

                	if(xi<1){
                    flag++;
                    x |= (1<<i);
                }
                }
            }
            else{
            	if(xi<1){
                if (((1<<i)&a)==0 && ((1<<i)&b)>0){
                    x |= (1<<i);
                }
            }
            else{
            	cout<<-1<<endl;
            }
            }
        }
    }
    else{
    	cout<<-1<<endl;
    }
    }
    cout<<x<<endl;

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