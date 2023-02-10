#include <bits/stdc++.h>
using namespace std;

int calc(){
	int N;
		cin>>N;
		int ones = 0, twos = 0, threes = 0;
		int ops = 0;
		for(int i=0; i<N; i++){
			long long x;
			cin>>x;
			if(x%4 == 1){ones++;}
			else if(x%4 == 3){threes++;}
			else if(x%4 == 2){twos++;}
		}
		if(ones!=0 && threes!=0){
			if(ones>threes){
				ops+=threes;
				ones-=threes;
				threes = 0;
			}
			else{
				ops+=ones;
				threes-=ones;
				ones = 0;
			}
		}
		ops += (threes/4 + ones/4)*3;
		threes%= 4;
		ones%= 4;
		if(ones==2 && twos>0){
			ops+=2;
			ones=0;
			twos--;
		}
		if(threes==2 && twos>0){
			ops+=2;
			threes=0;
			twos--;
		}
		cout<<ones<<" "<<twos<<" "<<threes<<endl;
		if(ones|| threes || (twos%2 != 0)){
			return -1;
		}
		return ops + (twos/2);

}

int main(){
	ios_base::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--){
		cout<<calc()<<endl;
	}
return 0;
}