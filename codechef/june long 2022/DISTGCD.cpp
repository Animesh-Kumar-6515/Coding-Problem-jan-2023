#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}


int printDivisors(int n)
{
    int flag=0;
    int x=sqrt(n);
    for (int i=1; i<=x; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                flag++;
 
            else 
                flag+=2;
        }
    }
    return flag;
}

void do_it_here() {
	
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    // prime[1]=0;
    int y=max(a,b);
    int temp=y-x;
    // for(int i=2;i<x;i++){
    // 	if(!prime[i])continue;
    // 	for(int j=i*i;j<=n;j+=i){
    // 		prime[j]=0;
    // 	}
    // }
    cout<<printDivisors(temp)<<endl;
    


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