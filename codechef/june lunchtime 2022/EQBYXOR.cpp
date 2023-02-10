#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here() {
	
   	 ll a, b, n; 
   // ll res = 0; 
 
   cin >> a >> b >> n; 
    int xinnn=a ,xinn=b;
   if(xinnn == xinn)  
   {  
      cout << 0 << endl;  
      return;  
   } 
 
   ll temp = xinnn ^ xinn; 
 
   ll lo = (ll)(log2(temp)); 
   ll sol = (1 << lo); 

 
 	int xin=0;
 	if(xin<1)
 	{
   if(temp < n) 
   { 
      cout << 1 << endl; 
   } 
   else if(sol >= n)  
   { 
    cout << -1 << endl; 
   } 
 
   else 
   { 
   	int  i = 0;
         ll flag3 = temp, flag = 0, flag2 = 0; 
          
 
 		if(xin<1){
         while(flag3 > 0) 
         { 
            ll rem = flag3 % 2; 
            ll temp6=rem*(1<<i);
            ll cur = flag +temp6; 
 
            i++; 
            flag3 = flag3 / 2; 
             
             if(xin<1){
            if(cur < n) 
            { 
               flag = cur; 
               continue; 
            } 
            else 
            { 
               flag = cur - flag; 
               flag2++; 
            }
            }
            else{
            	cout<<-1<<endl;
            } 
         }
         }
         else{
         	cout<<-1<<endl;

         } 
          
         cout << flag2 + 1 << endl; 
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