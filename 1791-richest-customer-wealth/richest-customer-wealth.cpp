class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int s=0;
            for(int j:accounts[i]){
                s+=j;
            }
            ans=max(ans,s);
            s=0;
            
        }
        return ans;
    }
};