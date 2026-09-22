class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int mins=0;
            
            for(int i=0;i<nums.size();i++){
                if(nums[i]<nums[mins]){
                    mins=i;
                }
            }
            nums[mins]*=multiplier;
        }
        return nums;
    }
};