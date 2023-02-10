/*code by animesh kumar/tron */

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;


// int primeornot(int n){
// 	int flag=0;
// 	for(int i=0;i*i<=n;i++){
// 		if(n%i==0){
// 			flag++;
// 			if(i!=n/i){
// 				flag++;
// 			}
// 		}
// 	}
// 	return flag;
// }

/*code by animesh kumar/tron */

// code to find all the prime number in a range n
// this is SIEVE OF ERATHOSTHEMES algorithm


// int n;
// cin>>n;
// vector<int>prime(n+1,1);

// prime[1]=0;
// for(int i=2;i<=n;i++){
// 	if(!prime[i])continue;
// 	for(int j=i*i;j<=n;j+=i){
// 		prime[j]=0;
// 	}
// }

// CODE TO CONVERT STRING TO INT
int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
 
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

/*code by animesh kumar/tron */
int circle(int x1, int y1, int x2, int y2, int r1, int r2)
{
    double d = sqrt((x1 - x2) * (x1 - x2)
                         + (y1 - y2) * (y1 - y2));
 
    if (d <= r1 - r2) {
        return 1;
    }
    else if (d <= r2 - r1) {
        return 1;
    }
    else if (d < r1 + r2) {
        return 1;
    }
    else if (d == r1 + r2) {
        return 1;
    }
    else {
        return 0;
    }
}
double circle_d(int x1, int y1, int x2, int y2, int r1, int r2)
{
    double d = sqrt((x1 - x2) * (x1 - x2)
                         + (y1 - y2) * (y1 - y2));
 
    return d;
}

void do_it_here(int t) {

//stop stalking my solution u mf!	
    int rs,rh;
    cin>>rs>>rh;
    int n;
    cin>>n;
    // int m;
    // cin>>n;
    vector<vector<int>>naar;
    // vector<int>ncheck;
    double min_n=1000000000000000000.0;
    vector<double>nstore;
    for(int i=0;i<n;i++){
        vector<int >temp;
        int x,y;
        cin>>x>>y;
        if(circle(0,0,x,y,rh,rs)==1){
            nstore.push_back(circle_d(0,0,x,y,rh,rs));
            if(min_n>circle_d(0,0,x,y,rh,rs)){
                min_n=circle_d(0,0,x,y,rh,rs);
            }
        }
        temp.push_back(x);
        temp.push_back(y);
        naar.push_back(temp);
    }
    int m;
    cin>>m;
    vector<vector<int>>maar;
    double min_m=1000000000000000000.0;
    vector<double>mstore;
    for(int i=0;i<m;i++){
        vector<int >temp;
        int x,y;
        cin>>x>>y;
        if(circle(0,0,x,y,rh,rs)==1){
            mstore.push_back(circle_d(0,0,x,y,rh,rs));
            if(min_m>circle_d(0,0,x,y,rh,rs)){
                min_m=circle_d(0,0,x,y,rh,rs);
            }
        }
        temp.push_back(x);
        temp.push_back(y);
        maar.push_back(temp);
    }
    int flag=0;
    // cout<<min_m<<" "<<min_n<<endl;
    if(min_m>min_n){
        for(int i=0;i<nstore.size();i++){
            // cout<<nstore[i]<<endl;
            if(nstore[i]<min_m){
                flag++;

            }
        }
        cout<<"Case #"<<t<<": "<<flag<<" "<<0<<endl;
    }
    else{
        // cout<<"min m "<<min_m<<endl;
        for(int i=0;i<mstore.size();i++){
            // cout<<"m "<<mstore[i]<<endl;
            if(mstore[i]<min_n){
                flag++;
            }
        }
        cout<<"Case #"<<t<<": "<<0<<" "<<flag<<endl;
    }
    // cout<<"Case #"<<t<<": "<<flag<<endl;
    

    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here(t);

    }
}
/*code by animesh kumar/tron */
//code by animesh kumar