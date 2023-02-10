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
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(),nums1.end())
        // set<int> st;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int l=0,r=0;
        // int m=nums1.size(),n=nums2.size();
        while((l<nums1.size())&&(r<nums2.size()))
        {
            if(nums1[l]==nums2[r])
            {
                ans.push_back(nums1[l]);
                l++;
                r++;
            }
            else if(nums1[l]>nums2[r])
                r++;
            else
                l++;
        }
        
        // for(auto elem:st)
        //     ans.push_back(elem);
        return ans;
    
    }


void do_it_here() {

//stop stocking my solution u mf!	
    int n;
    cin>>n;
    vector<vector<int>>mat;
    int mx=0;
    int ind=0;
    for(int i=0;i<n;i++){
        vector<int>v;
        int x;
        cin>>x;
        // mx=max(x,mx);
        // ind=i;
        if(x>mx){
            mx=x;
            ind=i;
        }
        v.push_back(x);
        for(int j=0;j<x;j++){
            int inp=0;
            cin>>inp;
            v.push_back(inp);
        }
        mat.push_back(v);
    }
    // for(int i=0;i<)
    if(mx<3){
        cout<<"NO"<<endl;
    }
    else{
        if(mx==5){
            cout<<"YES"<<endl;
            return;
        }
        else{
            vector<int>not_present;
            // for(int i=1;i<=mx+1;i++){
                // if(mat[ind][i]==i+1)
            int flag=0;
        
            if(count(mat[ind].begin(),mat[ind].end(),1)){
                flag++;
            }
            else{
                not_present.push_back(1);
            }
            if(count(mat[ind].begin(),mat[ind].end(),2)){
                flag++;
            }
            else{
                not_present.push_back(2);
            }
            if(count(mat[ind].begin(),mat[ind].end(),3)){
                flag++;
            }
            else{
                not_present.push_back(3);
            }
            if(count(mat[ind].begin(),mat[ind].end(),4)){
                flag++;
            }
            else{
                not_present.push_back(4);
            }
            if(count(mat[ind].begin(),mat[ind].end(),5)){
                flag++;
            }
            else{
                not_present.push_back(5);
            }
                
            // }
            
            for(int i=0;i<mat.size();i++){
                int xin=0;
                for(int j=1;j<=mat[i][0];j++){
                    for(int k=0;k<not_present.size();k++){
                        if(not_present[k]==mat[i][j]){
                            xin++;
                        }
                    }
                }
                if(xin==not_present.size()){
                    cout<<"YES"<<endl;
                    return;
                }
            }
            cout<<"NO"<<endl;
            return;


            // for(int i=0;i<not_present.size();i++){
            //     // for(int j=0;j)
            //     cout<<not_present[i]<<" ";
            // }
            // cout<<endl;
        }
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
/*code by animesh kumar/tron */
//code by animesh kumar