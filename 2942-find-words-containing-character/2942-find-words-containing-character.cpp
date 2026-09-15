class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(char ch:words[i] ){
                if(x==ch){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};