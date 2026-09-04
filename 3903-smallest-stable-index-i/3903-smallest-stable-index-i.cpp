class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        for(int i=0;i<nums.size();i++){
            int lmax=nums[0];
            int rmin=nums[i];
            for(int j=0;j<i;j++){
                 lmax=max(lmax,nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                 rmin=min(nums[j],rmin);
            }
            if(lmax-rmin <=k){
                return i;
            }            
        }
        return -1;
    }
};