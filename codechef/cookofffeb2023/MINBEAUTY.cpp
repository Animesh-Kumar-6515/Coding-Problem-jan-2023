#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("8.in", "r", stdin);
    freopen("88.out", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int result = INT_MAX;
        for(int i = 1;i<n-1;i++){
            int median = v[i];
            int l = 0;
            int r = n-1; 
            int minDiff = INT_MAX;
            while (l<r and l<i and r>i){
                int sum = (v[l] + v[i] + v[r]);
                int dif = abs(sum - 3*median);
                // cout<<l<<" "<<i<<" "<<r<<" "<<sum<<" "<<median<<" "<<dif<<" "<<minDiff<<endl;
                if(dif <= minDiff) minDiff = dif ;
              

                if(minDiff==0) break;
                if(sum>3*median) r--;
                else             l++;
            }
            result = min(result , minDiff);
        }
        cout<<result<<'\n';
    }

    // cerr << "\nTime elapsed: " << setprecision(6) << 1000.0 * clock() / CLOCKS_PER_SEC << "ms\n";

    return 0;
}