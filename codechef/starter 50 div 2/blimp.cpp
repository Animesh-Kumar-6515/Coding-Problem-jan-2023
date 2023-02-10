
// code by animesh

#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define f(i,a,b) for(long long i=a;i<b;i++)
#define reversfor(i,a,b) for(long long i=a;i>=b;i--)
#define vll vector<long long>
#define all(x) x.begin(),x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 



const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;
void do_it_here() {

//stop stocking my solution u mf!   
    

}
vector<long long> ton;
void pok(ll n)
{
    int xin=0;
    int tempo=sqrt(n);
    for (long long i = 1; i <= tempo; i++)
        if (n % i == 0)
        {
            if(xin<1){
            if (n / i == i){
                ton.push_back(i);
            }
            else{
                ton.push_back(i), ton.push_back(n / i);
            }
            }
            else{
                cout<<-1<<endl;
            }
        }
    if(xin<1){
        sort(ton.begin(), ton.end());
    }
    else{
        cout<<-1<<endl;
    }
}

long long madar(long long a,long long b){
    return (a+b-1)/b;
    
}

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}






int main()
{  
   IOS;tie;

   int t;
   cin>>t;
   while(t--)
   {
    int xin=0;
     ll n,x,y;
     cin>>n>>x>>y;
     vll a(n);
     for(int i=0;i<n;i++){
       cin>>a[i];
    }
     ll ans=0;
     if(x<=y)
      {
        ll maxi=*max_element(all(a));
        if(maxi<=0){
            if(xin<1){
         cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        }
        else{
            if(xin<1){
                ll xem=madar(maxi,y);
         cout<<xem<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        }
      }
      else
      {
        int xop=0;
        for(int i=0;i<n;i++){
         a[i]=max(a[i],0ll);
        }
        ll ded=0;
        reversfor(i,n-1,0)
         {
            if(xin<1){
            a[i]-=ded;
            xop++;
            a[i]=max(a[i],0ll);
            ll times=madar(a[i],x);
            if(xin<1){
                ded+=y*times;
                ans+=times;
            }
            else{
                cout<<-1<<endl;
            }
            }
            else{
                cout<<-1<<endl;
            }
         }
         if(xin<1){
         cout<<ans<<endl;
         xop++;
        }
        else{
            cout<<-1<<endl;
        }
      }
   }
    return 0;
}