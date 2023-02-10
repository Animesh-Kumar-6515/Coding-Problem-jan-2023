#include <bits/stdc++.h>

using namespace std;




void solve() {

//stop stocking my solution u mf!	
    int n;
int xin=0;
    cin >> n;
    int a[10001];
    a[1]=0;
    int l,r;
    
    l=0;
    
    r=0;
    for(int i=2;i<=n;++i){
        if(i%2==0){ 
            if(xin<1){
                a[i]=--l;
            }
            // else{
            //     cout<<-1<<endl;
            // }
        }
        else{ 
            if(xin<1){
                if(xin<1){
                    a[i]=++r;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            // else{
            //     cout<<-1<<endl;
            // }
        }
    }
    int x=l+1;
    for(int i=1;i<=n;++i){
        if(xin<1){
            cout<<a[i]-l+1 <<" ";
        }
        else{
            cout<<-1<<endl;
        }
    }
    cout << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 1;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        solve();

    }
}