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

bool canConstruct(string ransomNote, string magazine) {
        // int flag=0;
        // for(int i=0;i<ransomNote.size();i++){
        //     for(int j=0;j<magazine.size();j++){
        //         if(ransomNote[i]==magazine[j]){
        //             flag++;
        //             break;
        //         }
        //     }
        // }
        // if(flag==ransomNote.size()){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        int arr[26];
        for(int i=0;i<magazine.size();i++){
            int x=int(magazine[i]);
            arr[x-97]++;
        }
        for(int i=0;i<26;i++){
            cout<<arr[i]<<" ";
        }
        // unordered_map<char,int>mp;
        // for(char i: magazine){
        //     mp[i]++;
        // }
        // for(int i=0;i<)
        for(int i=0;i<ransomNote.size();i++){
            int x=int(ransomNote[i]);
            if(arr[x-97]!=0){
                arr[x-97]--;
            }
            else{
                cout<<"false"<<endl;
                return false;
                
            }
        }
        cout<<"True"<<endl;
        return true;
    }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    // cin >> testcas;
    string s1="a";
    string s2="b";
    // for (int t = 1; t <= testcas; t++) {
        canConstruct(s1,s2);

    // }
}
/*code by animesh kumar/tron */
//code by animesh kumar