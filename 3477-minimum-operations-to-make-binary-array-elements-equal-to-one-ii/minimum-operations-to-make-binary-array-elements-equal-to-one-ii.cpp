class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int flip = 0;

        for (int x : nums) {
            // ^XOR same gives 0 differ gives 1:
            if ((x ^ flip) == 0) {
                ans++;
                flip ^= 1;
            }
        }

        return ans;
    }
};
