class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int x=nums.size();
        int y=target;
        for(int i=0;i<x;i++){
            for (int j=i+1;j<x;j++){
                if(nums[i]+nums[j]==y){
                    ans.push_back(i);
                    ans.push_back(j);

                }
            }
        }
        return ans;
    }
};