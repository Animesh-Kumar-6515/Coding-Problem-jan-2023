#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

void mergeArrays(int a[], int b[], int n, int m)
{
    // Declaring a map.
    // using map as a inbuilt tool
    // to store elements in sorted order.
    map<int, bool> mp;
     
    // Inserting values to a map.
    for(int i = 0; i < n; i++)
    mp[a[i]] = true;
     
    for(int i = 0;i < m;i++)
    mp[b[i]] = true;
     
    // Printing keys of the map.
    // for(auto i: mp)
    // cout<< i.first <<" ";
}


void do_it_here() {
	
    int n;
    cin>>n;
    int s[n],f[n];
    for(int i=0;i<n;i++){
    	cin>>s[i];
    }
    for(int i=0;i<n;i++){
    	cin>>f[i];
    }

    // mergeArrays(s,f,n,n);
    // map<int, bool> mp;
     
    // // Inserting values to a map.
    // for(int i = 0; i < n; i++)
    // mp[s[i]] = true;
     
    // for(int i = 0;i < n;i++)
    // mp[f[i]] = true;
	

	// int x=2*n;
	// int arr[x];
	// for(auto i: mp)
 //    arr[i]=i.first;
	int ar[n];
	ar[0]=f[0]-s[0];
	for(int i=1;i<n;i++){
		if(s[i]<=f[i-1]){
			ar[i]=f[i]-f[i-1];
		}
		else{
			ar[i]=f[i]-s[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;


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