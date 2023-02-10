class Solution {
public:
    /* We sort the properties by the first element i.e attack( High->Low)
So now we need to handle the second element only i.e defense.
Iterate through the back and use a variable maxTillNow to store the maximum defense we saw till now.
If at any point the current defense is smaller than the maxTillNow it clearly means that we have a property with both attack and defense greater than the current property so we can increase our ans else we just update our maxTillNow. */
    
    //custom sort for defence
    
    static bool comp(vector<int> &a,vector<int> &b){  //custom sort for defence
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),comp);
        int maxTillNow = INT_MIN;
        int ans=0;
        for(int i=prop.size()-1;i>=0;i--){
            if(prop[i][1]<maxTillNow){
                ans++;
            }
            maxTillNow = max(maxTillNow,prop[i][1]);
        }
        return ans;
    }
};