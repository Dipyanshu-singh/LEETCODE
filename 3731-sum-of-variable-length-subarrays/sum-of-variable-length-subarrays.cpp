class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                s+=nums[i];
            }
            else if(i==1){
                s+=nums[i-1]+nums[i];
            }
            else{
                int st=max(0,i-nums[i]);
                for(int j=st;j<=i;j++){
                    s+=nums[j];
                }
            }

        }
        return s;
    }
};