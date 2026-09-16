class Solution:
    def subarraySum(self, nums: List[int]) -> int:
        s=0
        n=len(nums)
        for i in range(0,n):
            st=max(0,i-nums[i])
             
            for j in range(st,i+1):
                s+=nums[j]
        return s
