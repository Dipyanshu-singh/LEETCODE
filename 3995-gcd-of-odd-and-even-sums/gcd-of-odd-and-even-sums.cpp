class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int l=n*2;
        int se=0,so=0;
        while(l>0){
            if(l%2==0){
                se += l;
            }
            else{
                so+=n;
            }
            l--;
        }
        return gcd(se,so);
    }
};