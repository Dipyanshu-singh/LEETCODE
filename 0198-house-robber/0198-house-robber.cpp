class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        int rob=0;
        int norob=0;
        for(int ch:nums){
            int curr=max(rob,norob+ch);
            norob=rob;
            rob=curr;

        }
        return rob;
    }
};