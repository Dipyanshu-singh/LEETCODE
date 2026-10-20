class Solution {
public:
    int numberOfSpecialChars(string word) {
        int co=0;
        for(char ch='a';ch<='z';ch++){
            bool lo=false,up=false;
            
            for(int c:word){
                if(c==ch){
                lo=true;
            }
            if(c==ch-32){
                up=true;
            }

            
            }
            if(lo&up){
                co++;
            }
        }
        return co;
    }
};