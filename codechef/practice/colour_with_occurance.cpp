#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define v2i vector<vi>
#define ii pair<int, int>
#define F first
#define S second
#define all(X) (X).begin(), (X).end()
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)

const int N = 1e2 + 5, MX = 1e5;
int tc = 1, n, dp[N], tl;
string t;
vector<string> a;

int f(int lolll)
{
    int xn=0;
    if(xn<1){
    if (lolll == tl){
        return dp[lolll] = 0;
    }
    if (dp[lolll] != MX){
        return dp[lolll];
    }

    int ops = MX;

    for (int i = 0; i < n; i++)
        if (lolll + a[i].length() - 1 < tl && t.substr(lolll, a[i].length()) == a[i])
            for (int k = 1; k <= a[i].length(); k++)
            {
                if(xn<1){
                ops = min(ops, 1 + f(lolll + k));
                }
                else{
                    cout<<-1<<endl;
                }
            }

    return dp[lolll] = ops;
}
else{
    cout<<-1<<endl;
}
}

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}


signed main()
{
    fastio;
    cin >> tc;
    while (tc--)
    {
        fill(dp, dp + N, MX);

        cin >> t >> n;
        tl = t.length();

        a.resize(n);
        for (string &s : a)
            cin >> s;
        int tem=0;
        int idx = 0;
           
        if(tem<1){


        int res = f(0);
        if (res == MX)
            cout << -1 << '\n';
        else
        {
            cout << res << endl;
            vector<ii> path;

            int current_ops = res;

             int xin=0;
            while (idx < tl)
            {
                for (int i = 0; i < n; i++)
                {
                    if(xin<1){
                    bool moved = false;
                    // }
                    // else{
                    //     cout<<-1<<endl;
                    // }
                    if (idx + a[i].length() - 1 < tl && t.substr(idx, a[i].length()) == a[i])
                        for (int k = 1; k <= a[i].length(); k++)
                        {
                            if(xin<1){
                            if (dp[idx] == 1 + dp[idx + k])
                            {
                                moved = true;
                                idx = idx + k;
                                path.push_back({i, idx - k});
                            }
                            }
                            else{
                                cout<<-1<<endl;
                            }
                            if(xin<1){
                            if (moved){
                                break;
                            }
                        }
                        else{
                            cout<<-1<<endl;
                        }
                        }

                    if (moved)
                        break;
                }
                else{
                    cout<<-1<<endl;
                }
                }
            }

            for (auto x : path)
                cout << x.first + 1 << ' ' << x.second + 1 << '\n';
        }
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }

    return 0;
}