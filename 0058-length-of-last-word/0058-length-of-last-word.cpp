class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;

        for (char ch : views::reverse(s)) {
            if (ch == ' ') {
                if (ans > 0)
                    break;
            } else {
                ans++;
            }
        }

        return ans;
    }
};
