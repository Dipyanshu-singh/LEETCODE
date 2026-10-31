class Solution {
public:
    double average(vector<int>& salary) {
        int mx=salary[0],mn=salary[0];
        for(int i=0;i<salary.size();i++){
            if(mx<salary[i]){
                mx=salary[i];
            }
            if(mn>salary[i]){
                mn=salary[i];
            }
        }
        int sum=0;
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
        }
        double ans=(double)(sum-mx-mn)/(salary.size()-2);
        return ans;
    }
};