class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int j=0;j<nums.size();j++){
            for(int i=j+1;i<nums.size();i++){
                if(nums[j]==nums[i]){
                    ans.push_back(nums[i]);
                    
                }
                
            }
        }
        return ans;
    }
};