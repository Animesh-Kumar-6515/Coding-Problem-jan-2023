/*tronani*/

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double


const int MAXN = 1e5 + 5;
const ll M = 1e9 + 7;

bool isInside(int x, int y, int N)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}
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
struct cell {
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis)
        : x(x), y(y), dis(dis)
    {
    }
};


int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}




 
// Utility method returns true if (x, y) lies
// inside Board


int minStepToReachTarget(
    int knightPos[], int targetPos[],
    int N)
{
    // x and y direction, where a knight can move
    
    queue<cell> q;
    q.push(cell(knightPos[0], knightPos[1], 0));
 
    cell t;
    int x, y;
    bool visit[N + 1][N + 1];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;
    visit[knightPos[0]][knightPos[1]] = true;
    int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int xin=0;
    while (!q.empty()) {
        t = q.front();
        q.pop();
        if (t.x == targetPos[0] && t.y == targetPos[1])
            return t.dis;
        if (xin<1){
        
            /* code */
    
        for (int i = 0; i < 8; i++) {
            if(xin<1){
            x = t.x + dx[i];
            y = t.y + dy[i];
        }
        else{
            cout<<-1<<endl;
        }
            if (isInside(x, y, N) && !visit[x][y]) {
                visit[x][y] = true;
                q.push(cell(x, y, t.dis + 1));
            }
        }
    }
    else{
        cout<<-1<<endl;
    }
    }
}


void do_it_here() {
	
    int x,y,f,e;
    cin>>x>>y>>f>>e;
    int pos[2];
    pos[0]=x;
    pos[1]=y;
    int fin[2];
    fin[0]=f;
    fin[1]=e;
    // cout<<fin[0]<<endl;
    int tem=minStepToReachTarget(pos,fin,8);
    // cout<<tem<<endl;
    if(tem%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcas = 23;
    cin >> testcas;
    
    for (int t = 1; t <= testcas; t++) {
        do_it_here();
    }
}