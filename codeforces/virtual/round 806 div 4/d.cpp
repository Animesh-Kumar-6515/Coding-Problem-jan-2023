#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
bool twoSum(vector<string> &nums, string target, unordered_set<string> &mp)
{
    for (int i = 0; i < nums.size(); i++)
    {
        string x = "";
        string op = nums[i];
        //   cout<<op<<endl;
        int len = op.size();
        bool first = true;
        for (int i = 0; i < len; i++)
        {
            if (target[i] != op[i])
            {
                first = false;
                break;
            }
        }
        if (first)
        {
            //  cout<<"here";
            for (int i = len; i < target.size(); i++)
            {
                x += target[i];
            }
            // cout<<" "<<x<<endl;
        }
        else
        {
            for (int i = target.size() - len; i < target.size(); i++)
            {
                if (target[i] != op[i])
                {
                    first = false;
                    break;
                }
                else
                    first = true;
            }
            if (first)
            {
                for (int i = 0; i < target.size() - len; i++)
                    x += target[i];
            }
        }
        // cout<<target<<" : "<<x<<endl;
        if (mp.find(x) != mp.end())
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> nums(n);
    unordered_set<string> s;
    loop(i, 0, n)
    {
        cin >> nums[i];
        s.insert(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i].size() == 1) 
        {
            cout << "0";
            continue;
        }
        bool yes = true;
        for (int j = 0; j < nums[i].size(); j++)
        {
            string l = nums[i].substr(0, j);
            string r = nums[i].substr(j, nums[i].size());
            //cout << l << " : " << r << endl;
            if (s.count(l) && s.count(r))
            {
                cout << "1";
                yes = false;
                break;
            }
        }
        if(yes)cout<<"0";
    }
    cout << "\n";
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}