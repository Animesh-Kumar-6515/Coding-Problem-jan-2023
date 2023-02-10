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



int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stocking my solution u mf!	
    int n;
    cin>>n;
    vector<string>v1;
    vector<string>v2,v3;
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v1.push_back(s);
        mp[v1[i]]++;
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v2.push_back(s);
        mp[v2[i]]++;
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v3.push_back(s);
        mp[v3[i]]++;
    }
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++){
        if(mp[v1[i]]==1){
            s1+=3;
        }
        else if(mp[v1[i]]==2){
            s1+=1;
        }
        else{
            s1+=0;
        }
    }
    for(int i=0;i<n;i++){
        if(mp[v2[i]]==1){
            s2+=3;
        }
        else if(mp[v2[i]]==2){
            s2+=1;
        }
        else{
            s2+=0;
        }
    }
    for(int i=0;i<n;i++){
        if(mp[v3[i]]==1){
            s3+=3;
        }
        else if(mp[v3[i]]==2){
            s3+=1;
        }
        else{
            s3+=0;
        }
    }
    cout<<s1<<" "<<s2<<" "<<s3<<endl;

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