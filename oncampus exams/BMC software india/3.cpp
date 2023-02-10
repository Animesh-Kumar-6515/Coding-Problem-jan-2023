# include <bits/stdc++.h>
using namespace std;
void solve(vector<long long> &arr){
    long long ans = LONG_MIN;
    for (long long i = 0; i < arr.size(); i++)
    {
        if(arr[i]<100){
        ans= max(arr[i],ans);
        }

    }
    if(ans==LONG_MIN){
        ans=0;
    }
    cout<<ans<<"\n";
}
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    vector <long long > arr;
    while (true)
    {
        /* code */
        long long n;
        cin>>n;
        if(n<0){
            break;
        }else{
            arr.push_back(n);
        }
    }
    solve(arr);
    
    
}