/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define int long long
#define ld long double


const int MAXN = 1e5 + 5;
// const ll M = 1e9 + 7;


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
    for (int i = 0; i < str.length(); i++) {
 
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
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


void do_it_here() {

//stop stalking my solution u mf!	
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return;
    }

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==2){
        if(arr[0]<arr[1]){
            int ans=arr[1]-arr[0];
            cout<<ans<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    // if((arr[n-1]-arr[0])<0){
    //     cout<<-1<<endl;
    //     return;
    // }
    int start=0;
    int en=n-1;
    if(n%2==1){
        start=(n/2)-1;
        en=(n/2)+1;
    }
    else{
        start=(n/2)-1;
        en=n/2;
    }
    vector<int>store;
    // cout<<"start  "<<start<<"   end  "<<en<<endl;
    while(start>=0 and en<=(n-1)){
        int temp=arr[en]-arr[start];
        store.push_back(temp);
        // cout<<temp<<" ";
        start--;
        en++;
    }
    // cout<<endl;
    int flag=0;
    if(store[store.size()-1]<0){
        flag=1;
    }
    for(int i=0;i<store.size()-1;i++){
        // cout<<store[i]<<" ";
        if(store[i]<0){
            flag=1;
            break;
        }
        if(store[i]>store[i+1]){
            flag=1;
            break;
        }
    }
    // cout<<endl;
    // cout<<"flag  "<<flag<<endl;
    if(flag==0){
        int ans=arr[n-1]-arr[0];
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    

}

signed main() {
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