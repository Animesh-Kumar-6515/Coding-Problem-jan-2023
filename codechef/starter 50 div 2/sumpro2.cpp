#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rf(i, a, b) for (long long i = a; i >= b; i--)
#define ll long long







#define all(x) x.begin(), x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL), cout.tie(NULL)
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

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int xinn=0;
        ll x, y;
        cin >> x >> y;
        xinn=0;
        ton.clear();
        pok(y);
        // xin=0;
        int ca = 0;
        pair<ll,ll> one, two;
        for (auto &i : ton)
        {
            if(xinn<1){
                if (i <= y / i)
                {
                    int tp=y/i;
                    two = {i, tp};
                    one = {x - (i - 1), i - 1};
                    if (one.first <= one.second)
                    {
                        if(xinn<1){
                        ca = 1;
                        break;
                        }
                        else{
                            cout<<-1<<endl;
                        }
                    }
                    one = {tp + 1, x - (tp + 1)};
                    if (one.first <= one.second)
                    {
                        if(xinn<1){
                        ca = 1;
                        break;
                        }
                        else{
                            cout<<-1<<endl;
                        }
                    }
                }
                else{
                    break;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
        if (ca){
            if(xinn<1){
            cout << one.first << " " << one.second << endl<< two.first << " " << two.second << endl;
             }
             else{
                cout<<-1<<endl;
             }
        }
        else{
            if(xinn<1){
            cout << -1 << endl;

            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
