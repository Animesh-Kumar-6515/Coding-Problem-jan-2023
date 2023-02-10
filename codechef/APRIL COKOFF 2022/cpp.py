# include<iostream>
using
namespace
std;
typedef
long
long
int ll;

int
main()
{
    int t;
cin >> t;
while (t - -)
    {
        ll
    m, n, i;
    cin >> n;
    ll
    x = n + 1, k;
    ll
    sum_n = 0, sum_x = 0;
    ll
    q = n;
    while (n != 0) {
    sum_n = sum_n + n % 10;
    n = n / 10;
    }
    int flag = 0;
    if (x > q)
        {
            ll
        p = x;
    while (p != 0) {
    sum_x = sum_x + p % 10;
    p = p / 10;
    }
    if ((sum_n % 2 == 0 & & sum_x % 2 != 0) | | (sum_n % 2 != 0 & & sum_x % 2 == 0))
        {
            cout << x << endl;
        flag = 1;
        }
        else
        {
            x + +;
        }
        }
        else
        x + +;
        if (flag == 0)
        cout << x << endl;
        }
        return 0;
    }