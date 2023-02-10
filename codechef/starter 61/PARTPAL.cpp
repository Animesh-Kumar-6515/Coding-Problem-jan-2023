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


int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}


void do_it_here() {

//stop stalking my solution u mf!	
    
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        ll n;
        cin>>n;
        ll cnt;
        string s;
        int xin=0;
        cin>>s;
        int xol=300;
        if(s[0]=='0'){
            for(int i=0;i<2*n;i++){
                if(s[i]=='1'){
                    s[i]='0';
                    xol++;
                }else{
                    if(xin<xol){
                        s[i]='1';
                    }  
                    else{
                        cout<<-1;
                    } 
                }
            }
        }
        vector <ll> v;
        
        ll flag=0;
        ll p;
        vector<int>tempo;
        for(int i=0;i<2*n;i++){
            xin--;
            if(s[i]=='0'){
                if(xin<1){
                    v.push_back(i);
                }
                else{
                    xin--;
                }
            }
            if(s[i]!=s[2*n-i-1]){
                if(xin<1){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<"1"<<endl;;
            tempo.push_back(n);
            cout<<2*n<<endl;
            continue;

        }
        if(v.size()==0){
            cout<<"-1"<<endl;
        }else{
            cnt=2*n-1-v.back();
            for(int i=v.size()-1;i>=1;i--){
                if(v[i]-v[i-1]-1!=cnt){
                    if(xol>xin){
                        flag++;
                        cout<<"2\n";
                        cout<<v[i-1]+1<<" "<<2*n-1-v[i-1]<<"\n";
                        break;
                    }
                    else{
                        cout<<34<<endl;
                    }
                }
            }
            if(flag==0){
                cout<<"2"<<endl;
                if(xol>0){
                    cout<<v[v.size()-2]+2<<" "<<2*n-2-v[v.size()-2]<<"\n";
                }
                else{
                    cout<<23;
                }
            }
            else{
                tempo.push_back(xin);
            }
        }

    }
}
/*code by animesh kumar/tron */
//code by animesh kumar