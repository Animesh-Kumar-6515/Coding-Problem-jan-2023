#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        vector<int> fina;
        vector<int> v1;
        int temp=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                v1.push_back(nums[i]);
            }
            else{
            	v1.push_back(nums[i]);
                temp=i+1;
                break;
            }
        }
      
        for(int i=temp;i<nums.size();i++){
            fina.push_back(nums[i]);
        }
        for(int i=0;i<v1.size();i++){
            fina.push_back(v1[i]); 
        }
       
        for(int i=0;i<nums.size()-1;i++){
        	
            if(final[i]>final[i+1]){
            	return false;
            }
        }
        // cout<<"yes";
        return true;
    }
int main(){
	vector<int>nums={3,4,5};
	check(nums);
} 