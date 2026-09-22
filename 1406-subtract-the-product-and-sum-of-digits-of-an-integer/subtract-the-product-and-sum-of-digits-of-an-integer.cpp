class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int sum=0;
        while(n>0){
            int mod=n%10;
            p*=mod;
            sum+=mod;
            n=n/10;
        }
        return p-sum;
    }
};