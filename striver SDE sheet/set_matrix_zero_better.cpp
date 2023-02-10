
// Intuition: Instead of traversing through each row and column, we can use dummy arrays to check if the particular row or column has an element 0 or not, which will improve the time complexity.

// Approach:Take two dummy array one of size of row and other of size of column.Now traverse through the array.If matrix[i][j]==0 then set dummy1[i]=0(for row) and dummy2[j]=0(for column).Now traverse through the array again and if dummy1[i]==0  || dummy2[j]==0 then arr[i][j]=0,else continue.


#include<bits/stdc++.h>

using namespace std;

void setZeroes(vector < vector < int >>  matrix) {
	int rows = matrix.size(), cols = matrix[0].size();
  vector < int > dummy1(rows,-1), dummy2(cols,-1);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {
        dummy1[i] = 0;
        dummy2[j] = 0;
      }
    }

  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (dummy1[i] == 0 || dummy2[j]==0) {
        matrix[i][j] = 0;
      }
    }
  }
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    	cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

}

int main() {
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		vector < vector < int >> matrix;
		for(int i=0;i<r;i++){
			vector<int>temp;
			for(int j=0;j<c;j++){
				int n;
				cin>>n;
				temp.push_back(n);

			}
			matrix.push_back(temp);
		}
		setZeroes(matrix);
	}
}