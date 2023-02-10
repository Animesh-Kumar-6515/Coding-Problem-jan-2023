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
int string_to_int(string s){
// string s=v[k-1];
int l=s.size();
int ten=pow(10,l-1);
int sum=0;
// cout<<l<<endl;
for(int i=0;i<l;i++){
    // cout<<int(s[i])<<endl;
    sum=sum+(int(s[i])-48)*ten;
    ten=ten/10;

}
return sum;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */


void do_it_here() {

//stop stalking my solution u mf!	
    ll n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;

    }
    ll mx=INT_MIN;
    // for(auto it:mp){
    //     mx=max(mx,it.second);
    // }
    // cout<<mx-1<<endl;
    vector<int>v;
    ll smx=0;
    for(auto it:mp){
        v.push_back(it.second);
    }
    sort(v.begin(),v.end(),greater<int>());
    mx=0;
    if(v.size()==1){
        if(v[0]==1){
            mx=0;
        }
        else if((v[0]&1)==0){
            mx=mx+(v[0]/2);
        }
        else{
            mx=mx+(v[0]/2)+1;
        }
    }
    else{
        int temp=v[1]-1;
        mx=mx+temp;
        // mx=mx+(v[0]-temp)
        // cout<<"temp  "<<temp<<endl;
        int temp2=v[0]-temp;
        // cout<<"temp2  "<<temp2<<endl;
        // cout<<" mx  "<<mx<<endl;
        if (temp2==1){
            // cout<<"c1"<<endl;
            mx+=0;
        }
        else if(temp2 %2==0){
            // cout<<"c2"<<endl;
            mx=mx+(temp2/2);
            // cout<<"mx2  "<<mx<<endl;
        }
        else{
            // cout<<"c3"<<endl;
            mx=mx+(temp2/2)+1;
        }
    }
    cout<<mx<<endl;
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