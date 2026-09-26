class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int ch:nums){
            string s= to_string(ch);
            for(char c:s){
                ans.push_back(c-'0');
            }
            

        }
        return ans;
    }
};