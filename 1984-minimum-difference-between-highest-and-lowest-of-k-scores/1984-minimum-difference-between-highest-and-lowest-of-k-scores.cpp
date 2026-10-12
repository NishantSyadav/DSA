class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int diff = 0;
        int ans = INT_MAX;
        int a = 0;
        int b = a + k -1;

        if (nums.size() == 1) {
            return 0;
        }

        while (b < nums.size()) {
            diff = nums[b] - nums[a];
            ans = min(diff, ans);
            a++;
            b++;
        }
        return ans;
    }
};