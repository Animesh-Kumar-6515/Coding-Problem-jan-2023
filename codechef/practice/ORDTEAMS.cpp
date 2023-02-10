#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


bool check(int ar[],int ar2[]){
	if(ar[0]<ar2[0] or ar[1]<ar2[1] or ar[2]<ar2[2]){
		return false;
	}
	else{
		if(ar[0]>ar2[0] or ar[1]>ar2[1] or ar[2]>ar2[2]){
			return true;
		}
		else{
			return false;
		}
	}
}


void do_it_here() {
	
    int arr1[3],arr2[3],arr3[3];
    for(int i=0;i<3;i++){
    	cin>>arr1[i];
    }
    for(int i=0;i<3;i++){
    	cin>>arr2[i];
    }
    for(int i=0;i<3;i++){
    	cin>>arr3[i];
    }


    //arr3>2>1 312 123 132 231 213

    if(check(arr3,arr2) and check(arr2,arr1)){
    	cout<<"YES"<<endl;
    }
    else if(check(arr3,arr1) and check(arr1,arr2)){
    	cout<<"YES"<<endl;
    }
    else if(check(arr1,arr2) and check(arr2,arr3)){
    	cout<<"YES"<<endl;
    }
    else if(check(arr1,arr3) and check(arr3,arr2)){
    	cout<<"YES"<<endl;
    }
    else if(check(arr2,arr3) and check(arr3,arr1)){
    	cout<<"YES"<<endl;
    }
    else if(check(arr2,arr1) and check(arr1,arr3)){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
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