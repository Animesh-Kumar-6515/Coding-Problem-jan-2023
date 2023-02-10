/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define int long long
#define ld long double


const int MAXN = 1e5 + 5;
const int M = 1e9 + 7;


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
// int string_to_int(string s){
// // string s=v[k-1];
// int l=s.size();
// int ten=pow(10,l-1);
// int sum=0;
// // cout<<l<<endl;
// for(int i=0;i<l;i++){
//     // cout<<int(s[i])<<endl;
//     sum=sum+(int(s[i])-48)*ten;
//     ten=ten/10;

// }
// return sum;
// }

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


void do_it_here() {

//stop stalking my solution u mf!	
    int n;
    cin>>n;
    int mx=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int front[n];
    // int back[n];
    front[0]=arr[0];
    vector<int>back;
    back.push_back(arr[n-1]);
    // cout<<front[0]<<" ";
    mx=max(mx,front[0]);
    for(int i=1;i<n;i++){
        front[i]=arr[i]+front[i-1];
        mx=max(mx,front[i]);
        // cout<<front[i]<<" ";
    }
    // cout<<endl;
    mx=max(mx,back[0]);
    // cout<<back[0]<<" ";
    // int bs=back[0];
    for(int i=1;i<n;i++){
        // back[n-1-i]=arr[i]+back[n-2-i];
        int temp=back[i-1]+arr[n-i-1];
        // bs=temp;
        back.push_back(temp);
        // cout<<back[i]<<" ";
        mx=max(mx,back[i]);
    }
    // cout<<endl;
    int bmax=INT_MIN;
    for(int i=0;i<m;i++){
        bmax=max(bmax,b[i]);
    }
    int amax=maxSubArraySum(arr,n);
    int xol=max(amax,bmax);
    int bsum=mx;
    for(int i=0;i<m;i++){
        if(b[i]>=0){
            bsum+=b[i];
        }
    }
    cout<<max(bsum,xol)<<endl;


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