class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
        vector<int> che(1001,0);
        vector<int> ans;
        for(int x:nums1){
            che[x]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(che[nums2[i]]>0){
                ans.push_back(nums2[i]);
                che[nums2[i]]--;
            }
        }
        
    return ans;
        
    }
};