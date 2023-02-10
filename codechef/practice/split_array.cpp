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
bool isPossible(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            cout<<it.first<<"  "<<it.second<<endl;
        }
        int n=mp.size();
        cout<<n<<endl;
        int x=0;
        int flag=0;
        ll xin=0;
        for(auto it:mp){
            if(x==0 or x==1 or x==n-1 or x==n-2){
                if(it.second>1){
                    cout<<"false1";
                    return false;
                }
            }
            else{
                if(it.second > 2){
                    cout<<"false2";
                    return false;
                }
                else if(it.second ==2){
                    // x++;
                    flag=x+1;
                    // for(int i=0)
                    // int tem1=it+1;
                    // int tem2=it+2;
                    cout<<it.second<<endl;
                    auto tem1=mp.find(flag+1);
                    auto tem2=mp.find(flag+2);
                    cout<<flag<<endl;
                    cout<<tem1->second<<" "<<tem2->second<<endl;
                    if(tem1->second==1 and tem2->second==1){
                        xin++;
                    }
                    else{
                        cout<<"false3";
                        return false;
                    }
                }
                else{
                    xin++;
                }
            }
            x++;
        }
        cout<<"true"<<endl;
        return true;

    }


void do_it_here() {

//stop stocking my solution u mf!	
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int testcas = 23;
    // cin >> testcas;
    
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    isPossible(v);
}
/*code by animesh kumar/tron */
//code by animesh kumar