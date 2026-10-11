class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int c:nums){
            int res=-1;
            for(int i=0;i<c;i++){
                if((i|(i+1))==c){
                    res=i;
                    break;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};