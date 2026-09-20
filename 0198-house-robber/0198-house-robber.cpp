class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        if (n == 1)
            return nums[0];

        vector<int> dp(n);
        dp[0] = nums[0];               // first element
        dp[1] = max(nums[0], nums[1]); // max of first & second element

        for (int i = 2; i < n; i++) {
            dp[i] =
                max(dp[i - 1],
                    dp[i - 2] + nums[i]); // if we choose curr element then
                                          // (n-2) choices are left , if we skip
                                          // curr element then (n-1)choices left
        }
        return dp[n - 1];
    }
};