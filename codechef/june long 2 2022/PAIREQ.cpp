#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
  
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
  
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}


void do_it_here() {
	// int hs[2000];
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	// hs[arr[i]]++;
    }
    unordered_map<int, int> mp;
  
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    int sum=0;
    int m=-100000;
    for (auto x : mp){
        // cout << s<< endl;
        if(x.second > m){
        	m=x.second;
        }
        sum=sum+x.second;
    }
    cout<<sum-m<<endl;

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