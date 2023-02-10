#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n=matrix[0].size();
    int temp=k-1;
    int flag=0;
    while(temp%n!=0){
        temp--;
        flag++;
        // cout<<"y"<<endl;
    }
    int ind1=(temp/n);
    // cout<<flag<<" "<<ind1<<endl;
    // cout<<matrix[ind1][flag]<<endl;
    return matrix[flag][ind1];
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> matrix;
	for(int j=0;j<n;j++){
		vector<int> v;
		for(int i=0;i<n;i++){
			
			int x;
			cin>>x;
			v.push_back(x);
		}
		matrix.push_back(v);
	}
	

	int k=7;
	kthSmallest(matrix,k);
}
// this was not the problem
