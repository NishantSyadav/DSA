class Solution {
public:
    int helper(vector<int>& nums, int start, int end) { //logic same as House Robber 1 prob

        int n = end - start + 1;

        if (n == 1)
            return nums[start];

        vector<int> dp(n);

        dp[0] = nums[start];

        dp[1] = max(nums[start], nums[start + 1]);

        for (int i = 2; i < n; i++) {

            dp[i] = max(dp[i - 1], dp[i - 2] + nums[start + i]);
        }

        return dp[n - 1];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        // Case 1: exclude last house
        int case1 = helper(nums, 0, n - 2);

        // Case 2: exclude first house
        int case2 = helper(nums, 1, n - 1);

        return max(case1, case2);
    }
};