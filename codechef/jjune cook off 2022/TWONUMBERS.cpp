#include <iostream>
using namespace std;
#define ll long long int

void do_it_here(){
	ll n;
    cin>>n;
    int x=n/2;
    int xin=2;
    if(xin>=2){
    if(n==2){
       cout<<0<<endl;
    }    
    else if(n%2==1){
        cout<<(x*(x+1))-1<<endl;
    }
    else{
        if(x%2==0){
            cout<<((x-1)*(x+1))-1<<endl;
        }
        else{
            cout<<((x-2)*(x+2))-1<<endl;
        }
    }
}
 else{
 	cout<<-1<<endl;
}
}


int main() {
 ll testc;
 cin>>testc;
 while(testc--){
     do_it_here();
// return 0;
   }
}