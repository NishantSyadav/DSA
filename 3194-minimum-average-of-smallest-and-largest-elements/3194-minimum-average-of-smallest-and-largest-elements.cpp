class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        double ans = INT_MAX;

        for (int i = 0; i < n / 2; i++) {
            double avg = (nums[i] + nums[n - i - 1]) / 2.0;  //main logic after sorting
            ans = min(ans, avg);  // storing minimum avg till time
        }

        return ans;
    }
};