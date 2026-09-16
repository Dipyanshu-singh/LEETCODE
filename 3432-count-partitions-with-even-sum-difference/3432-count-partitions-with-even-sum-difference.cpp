class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s=0;
        for(int ch:nums){
            s+=ch;
        }
        if(s%2==0){
            return nums.size()-1;
        }
        return 0;
    }
};