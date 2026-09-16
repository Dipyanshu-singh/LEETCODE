class Solution {
public:
    string decodeMessage(string key, string message) {
        set<char> st;
        string dc;
        string alpha="abcdefghijklmnopqrstuvwxyz";
        string ans;
        for(char c:key){
            if(c == ' ') continue;
            if(st.find(c)==st.end()){
                st.insert(c);
                dc+=c;
            }
        }
        for(char ch:message){
            if(ch==' '){
                ans+=' ';
            }
            else{
                int index = dc.find(ch);

                ans+=alpha[index];


            }
        }
        return ans;
    }
};