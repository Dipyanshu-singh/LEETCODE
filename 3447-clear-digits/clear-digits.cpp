class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for(char ch:s){
            if(isalpha(ch)){
                ans=ans+ch;
            }
            if(isdigit(ch)){
                ans.pop_back();
            }
        }
        return ans;
    }
};