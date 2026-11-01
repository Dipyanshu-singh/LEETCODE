class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int m=0;
        for(int i=0;i<nums.size();i++){
            m+=nums[i]-mn;
        }
        return m;
    }
};