class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
         int t=0;
        for(int ch:nums){
            t+=ch;
        }
        int l=0;
        
        for(int i=0;i<nums.size();i++){
            int r=t-l-nums[i];
            int a= abs(l-r);
            ans.push_back(a);
            l+=nums[i];
        }
        return ans;
    }
};