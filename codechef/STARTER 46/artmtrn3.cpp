#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;

int main() {
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
vector<long long> v ;
for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
long long l,r;
l=0; r=0;
for(long long i=0;i<n/2;i++){
    l+=(1000-v[i]);
}
 for(long long i=n/2;i<n;i++){
     r+=v[i];
 }
 int ans=0;
 ans=l+r;
 cout<<ans;
 cout<<endl;
    
    
}
return 0;
}