[Forwarded from Relatrino]
#include <bits/stdc++.h>
using namespace std;
int main()  {
        int t; 
        cin >> t;
        while(t--)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            int b=0,c=0,d=0,e=0;
            int f=0;
            for(int i=0;i<n;i++)
            {
                cin >> a[i];
                if(a[i]==1)
                {
                    d++;
                }else {
                    if (a[i]==2)
                    {
                        c++;
                    }
                    e=e+a[i];
                    f++;
                    if(a[i]%2!=0)
                    {
                        b++;
                    }
                }
            }
            if(d==1)
            {
                if(b%2==0)
                {
                    cout << "CHEF\n";
                    continue;
                }
                if(c==0)
                {

                    cout << "CHEFINA\n";
                    continue;
                }
                e=e-2;
                f--;
                if((e-f)%2!=0)
                {

                    cout << "CHEFINA\n";
                    continue;
                }else {

                    cout << "CHEF\n";
                    continue;
                }

            }else if(d>1)
            {
                if((e-f)%2!=0)
                {

                    cout << "CHEF\n";
                    continue;
                }else {

                    cout << "CHEFINA\n";
                    continue;
                }
            }
            if (b % 2 != 0
            ) {
                cout << "CHEF\n";
                continue;

            }else {
                cout << "CHEFINA\n";
                ;
                continue;
            }

        }
  }