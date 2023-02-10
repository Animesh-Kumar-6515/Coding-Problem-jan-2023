#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
    unsigned long long int x,y;
    cin>>x>>y;
    unsigned long long int a=x,b=y;
    if(1>0){
    
    if(a==b){
    	cout<<b-a+b<<endl;
    }
    else if(a==0 or b==0){
    	cout<<-1<<endl;
    }
    else{
    	unsigned long long int flag=0;
    	unsigned long long int it=0;
    	unsigned long long int mat=max(a,b);
    	unsigned long long int mit=min(a,b);
    	if(1>0){
    	while(mit<mat){
    		mit=mit*2;
    		flag=flag+1;
    	}
    	}
    	if(mit>=mat){
    		flag--;
    		mit=mit/2;
    	}
    	it=it+mit-(mat-mit);
    	unsigned long long int mitt=mit;
    	mitt=mitt-it;
    	mat=mat-it;
    	unsigned long long int matt=mat;
    	mitt=mitt*2;
    	flag=flag+1;
    	flag=flag+matt+1-2+1;
    	cout<<flag<<endl;
    }
}
else{
	cout<<-1<<endl;
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