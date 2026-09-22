class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> arr;
        for(int i=0;i<points.size();i++){
            for(int ch:points[i]){
                arr.push_back(ch);
                break;
            }
        }
        sort(arr.begin(),arr.end());
        int mx=0;
        for(int i=1;i<arr.size();i++){
            mx=max(arr[i]-arr[i-1],mx);
        }
        return mx;
    }
};