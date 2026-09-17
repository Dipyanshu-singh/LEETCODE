class Solution {
public:
    int minimumSum(int num) {
        multiset<int> st;
        while(num>0){
            int ld=num%10;
            st.insert(ld);
            num=num/10;

        }
        int ans=(*next(st.begin(),0)*10 + *next(st.begin(),2))+
        (*next(st.begin(),1)*10 + *next(st.begin(),3));
        return ans;
    }
};