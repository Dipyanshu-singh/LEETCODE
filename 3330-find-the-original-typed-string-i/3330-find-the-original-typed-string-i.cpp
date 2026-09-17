class Solution {
public:
    int possibleStringCount(string word) {
        int c=0;
        for(int i=0;i<word.size();i++){
            for(int j=i+1;j<word.size();j++){
                if(word[i]==word[i+1]){
                    c++;
                    break;
                }
                
            }
        }
        return c+1;
    }
};