class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b){
            return 1LL * abs(a)*abs(a) < abs(b)*abs(b);
        });
        long long ans=0;
        
        for(int i=0;i<nums.size();i++){
            long long sq=1LL * (nums[i]*nums[i]);
            if(i<nums.size()/2){
                ans-=sq;
            }
            else{
                ans+=sq;
            }
        }
        return ans;
    }
};