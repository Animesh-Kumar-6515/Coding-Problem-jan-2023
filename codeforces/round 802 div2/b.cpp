#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;




void do_it_here()
{
int n;
cin>>n;
 int temp1=INT_MAX;
int temp2=INT_MAX;
 
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
 
 
if(n&1)
{
cout<<"Mike"<<endl;
}
else
{

 
int nun=0;
int nun2=2;
 
for(int i=0;i<n;i++)
{
	if(nun<nun2){
if(i%2==0)
{
  temp1=min(temp1,arr[i]);
}
else
{
  temp2=min(temp2,arr[i]);
}
}
else{
	cout<<n<<endl;
}
}
int xin1=0,xin2=0;
// int index2;
for(int i=0;i<n;i++)
{
	if(i%2==0){
  if(arr[i]==temp1)
  {
    xin1=i;
    break;
  }
}
}
 
 
for(int i=1;i<n;i+=2)
{
  if(arr[i]==temp2)
  {
    xin2=i;
    break;
  }
}
 
 
if(temp1<temp2)
{
  cout<<"Joe"<<endl;
}
else if(temp1>temp2)
{
  cout<<"Mike"<<endl;
}
else
{
  if(xin1<xin2)
    cout<<"Joe"<<endl;
  else
    cout<<"Mike"<<endl;
}
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