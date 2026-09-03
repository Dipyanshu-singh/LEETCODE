class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size()<3){
            return -1;
        }
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                     if(nums[i] == nums[j] && nums[j] == nums[k] && i != j && j != k && i != k
){
                        int dist=abs(i - j) + abs(j - k) + abs(k - i);
                        ans = min(ans, dist);
                    }
                           
                }         
                   }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};