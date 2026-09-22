class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s:sentences){
            int c=0;
            for(char ch:s){
                if(ch==' '){
                    c++;
                }
                ans=max(ans,c);
            }
        }
        return ans+1;
    }
};