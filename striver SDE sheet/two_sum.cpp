vector<int> res,store;
        store=nums;
        sort(store.begin(),store.end());
        int left=0;
        int right=nums.size()-1;
        int p1,p2;
        if(nums.size()==2){
            res.push_back(0);
            res.push_back(1);
            return res;
        }
        while(left<right){
            if(store[left]+store[right]==target){
                p1=store[left];
                p2=store[right];
                break;
            }
            else if(store[left]+store[right]>target){
                right--;
            }
            else{
                left++;
            }
        }
        for(int i=0;i<nums.size();++i){
            if(nums[i]==p1){
                res.emplace_back(i);
            }
            if(nums[i]==p2){
                res.emplace_back(i);
            }
      }
        return res;
    