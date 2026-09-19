class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(char ch:jewels){
            for(char che:stones){
                if(ch==che){
                    c++;
                }
            }
        }
        return c;
    }
};