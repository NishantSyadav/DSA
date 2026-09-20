class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>dp(n+1);

        dp[0] = 0; //because jump can start from 0th index
        dp[1] = 0; //because jump can start from 1st index

        for(int i = 2; i <= n; i++){
        //calculating min cost for i from i-1 and i-2 steps
            dp[i] = min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2]);
        }

        return dp[n];
    }
};