class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();){
            if(nums[i]<k){
                nums.erase(nums.begin()+i);
                c++;
            }
            else{
                i++;
            }
        }
        return c;
    }
};