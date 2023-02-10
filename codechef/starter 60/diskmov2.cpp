#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        int n;
        cin >> n;
vi array(n);
for (int i = 0; i < n; i++)
{
    cin >> array[i];
}
vi xyz(n / 2);
int counter = 0;
for (int i = 0; i < n / 2; i++)
{
    if (array[n - i - 1] >= array[i])
    {
        xyz[counter] = abs(array[n - i - 1] - array[i]);
        counter++;
    }
    else
    {
        cout << -1 << endl;
        return 0;
    }
}
int sum = 0;
for (int i = 1; i < counter; i++)
{
    if (xyz[i] <= xyz[i - 1])
    {
        continue;
    }
    else
    {
        cout << -1 << endl;
        return 0;
    }
}
cout << xyz[0] << endl;
    }
}