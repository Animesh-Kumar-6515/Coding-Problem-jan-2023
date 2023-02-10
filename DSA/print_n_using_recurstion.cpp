#include <iostream>
using namespace std;
#define N 100
 
void print(int i, int n)
{
    if (i >= n) {
        return;
    }
	cout << i << " ";
	// i++;
    print(i+1,n);
	
    
}

int main()
{
	int n;
	cin>>n;
    print(0,n);
    return 0;
}