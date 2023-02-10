#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string st;
	cin>>st;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	transform(st.begin(),st.end(),st.begin(),::tolower);
	int flag=0;
	if(s==st){
		cout<<0<<endl;
	}
	else{
		for(int i=0;i<s.size();i++){
			int temp=int(s[i]);
			int temp2=int(st[i]);
			if(temp<temp2){
				cout<<-1<<endl;
				return 0;
			}
			else if(temp==temp2){
				flag++;
			}
			else{
				cout<<1<<endl;
				return 0;
			}
		}
	}
}