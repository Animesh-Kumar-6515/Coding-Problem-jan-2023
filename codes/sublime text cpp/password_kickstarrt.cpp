#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;



void solve() {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 23;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
	    int n;
	    cin>>n;
	    string st;
	    cin>>st;
	    int lw=0,up=0,sc=0,num=0;
	    for(int i=0;i<n;i++){
	    	if(st[i]=='1' or st[i]=='0' or st[i]=='2' or st[i]=='3' or st[i]=='4' or st[i]=='5' or st[i]=='6' or st[i]=='7' or st[i]=='8' or st[i]=='9'){
	    		num++;
	    	}
	    	else{
	    		int temp=int(st[i]);
	    		if(temp>96 and temp<123){
	    			lw++;
	    		}
	    		if(temp>64 and temp<91){
	    			up++;
	    		}
	    		if(temp==35 or temp==42 or temp==64 or temp==38){
	    			sc++;
	    		}
	    	}
	    	

	    }
	    if(num==0){
	    	st=st+"0";
	    }
	    if(lw==0){
	    	st=st+"a";
	    }
	    if(up==0){
	    	st=st+"A";
	    }
	    if(sc==0){
	    	st=st+"*";
	    }
	    if(st.size()<7){
	    	int x=7-st.size();
	    	for(int i=0;i<x;i++){
	    		st=st+"*";
	    	}
	    }
	    cout<<"Case #"<<t<<": "<<st<<endl;
    }
}
