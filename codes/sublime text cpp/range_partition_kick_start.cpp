#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;

// int subArraySum(int arr[], int n, int sum)
// {
//     /* Initialize curr_sum as value of 
//     first element and starting point as 0 */
//     int curr_sum = arr[0], start = 0, i;
  
//     /* Add elements one by one to curr_sum and 
//     if the curr_sum exceeds the sum,
//     then remove starting element */
//     for (i = 1; i <= n; i++) {
//         // If curr_sum exceeds the sum,
//         // then remove the starting elements
//         while (curr_sum > sum && start < i - 1) {
//             curr_sum = curr_sum - arr[start];
//             start++;
//         }
  
//         // If curr_sum becomes equal to sum,
//         // then return true
//         if (curr_sum == sum) {
//             cout << "Sum found between indexes "
//                  << start << " and " << i - 1;
//             return 1;
//         }
  
//         // Add this element to curr_sum
//         if (i < n)
//             curr_sum = curr_sum + arr[i];
//     }
  
//     // If we reach here, then no subarray
//     cout << "No subarray found";
//     return 0;
// }

void solve() {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 23;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": "<<solve()<<endl;
        // solve();
    	int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
    	int temp3=i+1;
    	int arr[i]=temp3;
    }
    // for(int i=0;i<n;i++){

    // }
    ld sum=((n*(n+1))/2)*1.0;
    ld sum2=(x+y)*1.0;
    ld ans1=(sum/sum2)*1.0;
    ll temp=int(ans1);
    if(temp==ans1){
    	cout << "Case #" << t << ": "<<"POSSIBLE"<<endl;
    	int temp2=(sum/sum2)*x;
    	int curr_sum = arr[0], start = 0, i;
    	int r=0,e=0;
    	for (i = 1; i <= n; i++) {
        while (curr_sum > temp2 && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }
  
        if (curr_sum == temp2) {
            // cout << "Sum found between indexes "
                 // << start << " and " << i - 1;
            // return 1;
        	r=start;
        	e=i-1;
        	break;
        }
  
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    cout<<temp2<<endl;
    for(int i=r;i<=e;i++){
    	cout<<i<<" ";
    }
    cout<<endl;
    	
    }
    else{
    	cout << "Case #" << t << ": "<<"IMPOSSIBLE"<<endl;
    }
    }
}
