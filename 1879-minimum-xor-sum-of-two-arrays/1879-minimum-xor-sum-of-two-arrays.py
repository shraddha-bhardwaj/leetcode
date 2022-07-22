class Solution:
    def minimumXORSum(self, nums1: List[int], nums2: List[int]) -> int:
		
        n = len(nums1)
        dp = [-1] * (1 << n)  
        def solve(i, mask):
            if i == n: 
                return 0
            
            if dp[mask] != -1:
                return dp[mask]
            
            ans = float('inf')
            for j in range(n):
                if (mask & 1 << j) == 0: # check for unused element
                    ans = min(ans, (nums1[i]^nums2[j]) + solve(i+1, mask | (1 << j))) 
            
            dp[mask] = ans
            return dp[mask]
        return solve(0, 0)
        