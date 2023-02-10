#include <iostream>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    n--;
    
    int ans = (n/5)*2;
    n%=5;
    
    if(n==4)
    {
        ans+=2;
    }
    else if(n!=0)
    {
        ans++;
    }
    
    cout << ans << endl;
    
}

int main() {
	// your code goes here
    int T;	
	cin >> T;
	while(T--)
	{
	    solution();
	}
	return 0;
}
