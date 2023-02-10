#include <bits/stdc++.h>

using namespace std;


bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int highestPowerof2(unsigned int n)
{
    // Invalid input
    if (n < 1)
        return 0;
    int res = 1;
    // Try all powers starting from 2^1
    for (int i = 0; i < 8 * sizeof(unsigned int); i++) {
        int curr = 1 << i;
        // If current power is more than n, break
        if (curr > n)
            break;
        res = curr;
    }
    return res;
}



void solve() {

//stop stocking my solution u mf!	
    int n;
    cin>>n;
    int flag=n;
    int count=0;
    int xin=0;
    while(! isPowerOfTwo(flag)){
    	if(xin<1){
        flag=flag-highestPowerof2(flag);
        count++;
    }
    else{
    	if(xin<1){
    		cout<<-1<<endl;
    	}
    }
    }
    cout<<count<<endl;
    

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