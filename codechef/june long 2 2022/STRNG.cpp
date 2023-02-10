#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

void Frange(int first[], int arr[],
                           int last[], int n)
{
    first[0] = arr[0];
    last[n-1] = arr[n-1];
    for (int i=1 ;i<=n-1; i++){
        first[i] = __gcd(first[i-1], arr[i]);
    }

    
 
    for (int i=n-2; i>=0 ;i--){
        last[i] = __gcd(last[i+1], arr[i]);
    }
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i <=n-1; i++)
    {
        result = __gcd(arr[i], result);
  
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int Grange(int left, int right, int first[],
                           int last[], int n)
{
    
    if (left==0){
        return last[right+1];
    }
 
    else if (right==n-1){
        return first[left-1];

    }
    else{
    return __gcd(first[left-1], last[right+1]);
}
}

void do_it_here() {
	
	int n;
	cin >> n;
	int flag = 0 ;
    
    int arr[n];

    for(int i=0 ; i<n ; i++){
    cin >> arr[i];
}
int ar[n];
for(int i=0;i<n;i++){
	ar[i]=arr[i];
}
sort(ar,ar+n);
int xin=0;
int first[n] , last[n];
if(xin<1){

Frange(first , arr , last , n);
}
else{
	cout<<-1<<endl;
}


for(int i = 0 ; i<n ; i++){
if(Grange( i , i , first , last , n) > 1){ flag++;}
}
	cout << flag << endl;
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