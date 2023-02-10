#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    int ma=-100005;
    int n;
    int mi=MAXN;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }
    for(int i=0;i<n;i++){
    	int temp=a[i]-b[i];
    	if(temp<0){
    		cout<<"NO"<<endl;
    		return;
    	}
    	if(temp>ma){
    		ma=temp;
    	}
    }
    int flag=0;
    for(int i=0;i<n;i++){

    	if((a[i]-ma)==b[i]){
    		flag++;
    	}
    	else{
    		if((a[i]-ma)<0){
    			if(b[i]==0){
    				// cout<<"YES"<<endl;
    				flag++;
    			}
    		}
    	}
    }
    if(flag==n){
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