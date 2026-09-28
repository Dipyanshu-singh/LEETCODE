class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int ans=0;
        for(char ch:s){
            if(ch=='('){
                c++;
            }

            ans=max(c,ans);
            
            if(ch==')'){
                c--;
            }
        }
        return ans;
    }
};