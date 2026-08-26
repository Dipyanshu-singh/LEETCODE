class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        
        stringstream ss(s);
        string word;
        
        while (ss >> word) {
            words.push_back(word);
        }

        sort(words.begin(), words.end(), [](string &a, string &b) {
            return a.back() < b.back();
        });

        string ans = "";

        for (string &word : words) {
            ans += word.substr(0, word.size() - 1);
            ans += " ";
        }

        ans.pop_back();
        return ans;
    }
};