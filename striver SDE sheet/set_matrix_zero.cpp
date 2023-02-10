#include<bits/stdc++.h>

using namespace std;

void setZeroes(vector < vector < int >>  matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {

        int ind = i - 1;
        while (ind >= 0) {
          if (matrix[ind][j] != 0) {
            matrix[ind][j] = -1;
          }
          ind--;
        }
        ind = i + 1;
        while (ind < rows) {
          if (matrix[ind][j] != 0) {
            matrix[ind][j] = -1;
          }
          ind++;
        }
        ind = j - 1;
        while (ind >= 0) {
          if (matrix[i][ind] != 0) {
            matrix[i][ind] = -1;

          }
          ind--;
        }
        ind = j + 1;
        while (ind < cols) {
          if (matrix[i][ind] != 0) {
            matrix[i][ind] = -1;

          }
          ind++;
        }
      }
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] <= 0) {
        matrix[i][j] = 0;
      }
    }
  }
  for(int i=0;i<rows;i++){
  	for(int j=0;j<cols;j++){
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