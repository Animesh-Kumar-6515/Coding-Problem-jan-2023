/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


int primeornot(int n){
	int flag=0;
	for(int i=0;i*i<=n;i++){
		if(n%i==0){
			flag++;
			if(i!=n/i){
				flag++;
			}
		}
	}
	return flag;
}

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
    

}


vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    // the basic idea is to calculate the sum of element of the array which are even
    // then store the initial array to a dummy array 
    // now  keep iteration over the  array and perfor the operation 
    // if the number we get after operation is even then we will add to the intial sum
    // and also check for the dummy array that is it  is even or odd if even ten remove the dummy elemenrt and add updated elementr 
    // and at last update the dummy element with updated element.
        vector<int>v;
        vector<int>temp(nums); //TO STORE THE PREVIOUS VALUE OF THE ARRAY
        int tsum=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]&1)==0){
                tsum+=nums[i];  //STORE THE INITIAL SUM OF THE ARRARY WITH EVEN NUMBER
            }
        }
        // cout<<tsum<<endl;
        for(int i=0;i<queries.size();i++){
            int sum=0;
            nums[queries[i][1]]+=queries[i][0];
            // for(int j=0;j<nums.size();j++){
            //     if((nums[j]&1)!=1){
            //         sum+=nums[j];
            //     }
            // }  BRUTE FOORECE APPORACH
            if(nums[queries[i][1]]%2==0){  //CHECKING IF THE UPDATED VALUE IS EVEN OR NOT
                if(temp[queries[i][1]]%2==0){   //CHECKING IF THE PREVIOUS VALUE OF THE ELEMENT WAS EVEN OR ODD
                    tsum=tsum-temp[queries[i][1]]+nums[queries[i][1]];
                }
                else{
                    tsum=tsum+nums[queries[i][1]];
                }
            }
            else{
                    if(temp[queries[i][1]]%2==0){
                        tsum=tsum-temp[queries[i][1]];
                    } 
            }
            temp[queries[i][1]]=nums[queries[i][1]]; //updating the dummy value/
            v.push_back(tsum);
        }
        cout<<endl;
        if(v.size()==0){
            return {0};
        }
        return v;
    }


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    // cin >> testcas;
    
    // for (int t = 1; t <= testcas; t++) {
    //     do_it_here();

    // }
    int n;
    cin>>n;
    vector<int>nums;
    vector<vector<int>>queries;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int i=0;i<=1;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        queries.push_back(v);
    }
    
    sumEvenAfterQueries(nums,queries);
}
/*code by animesh kumar/tron */
//code by animesh kumar