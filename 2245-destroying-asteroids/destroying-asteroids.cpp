class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long s=mass;
        for(int i=0;i<asteroids.size();i++){
            
            if(s<asteroids[i]){
                return false;
            }
            s+=asteroids[i];
        }
        return true;
    }
};