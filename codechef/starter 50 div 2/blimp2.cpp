#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define ll long long
#define mp make_pair
#define pb push_back
#define vll vector<long long>
#define vvl vector<vll>
#define pll pair<ll,ll>
#define vc vector
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 
long long Ceiling(long long a,long long b){
    return (a+b-1)/b;
    
}

int main()
{  
   IOS;tie;
   int t;
   cin>>t;
   while(t--)
   {
     ll n,x,y;
     cin>>n>>x>>y;
     vll a(n);
     f(i,0,n)
       cin>>a[i];
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
         cout<<Ceiling(maxi,y)<<endl;
        }
      }
      else
      {
        f(i,0,n)
         a[i]=max(a[i],0ll);
        ll ded=0;
        rf(i,n-1,0)
         {
            a[i]-=ded;
            a[i]=max(a[i],0ll);
            ll times=Ceiling(a[i],x);
            ded+=y*times;
            ans+=times;
         }
         cout<<ans<<endl;
      }
   }
    return 0;
}