class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int c=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                c++;
            }
            if(nums[i]<=nums[i-1]) break;
            
            
        }
        return nums.size()-c-1;
    }
};