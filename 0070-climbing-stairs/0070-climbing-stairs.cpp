// class Solution {
// public:
// //Memoization Method
//     int helper(int n, vector<int>& dp) {

//         if (n == 1 || n == 2) {
//             return n;
//         }
//         if (dp[n] != -1) {  //if result is already present or being calculated before
//             return dp[n];//then return that result
//         }

//         return helper(n - 1, dp) + helper(n - 2, dp);
//     }
//     int climbStairs(int n) {

//         vector<int> dp(n + 1, -1); //create a dp vector with all initial values as -1
//         return helper(n, dp);
//     }
// };

               //Tabular Method
class Solution {
    public:
       int climbStairs(int n){

        if(n == 1 || n == 2){
            return n;
        }
        vector<int>dp(n+1);
        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
       }
};