class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(int ch:nums){
            num^=ch;

        }
        return num;
    }
};