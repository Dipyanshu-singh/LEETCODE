class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int i=0;
        for(int ch:s){
            
            if(ch==' '){
                i++;
            }
            if(i==k){
                break;
            }
            ans+=ch;
        }
        return ans;
    }
};