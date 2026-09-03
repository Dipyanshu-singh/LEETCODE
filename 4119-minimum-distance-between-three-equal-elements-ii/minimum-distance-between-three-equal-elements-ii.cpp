class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);

            int n = pos[nums[i]].size();

            if (n >= 3) {
                int first = pos[nums[i]][n - 3];
                int third = pos[nums[i]][n - 1];

                ans = min(ans, 2 * (third - first));
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
