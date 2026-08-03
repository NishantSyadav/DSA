class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {

        long long ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int even = 0;
            int odd = 0;

            for (int j = i; j < n; j++) {

                if (nums[j] % 2 == 0)
                    even++;
                else
                    odd++;

                if (odd > 0 && even * b <= odd * a) {
                    ans++;
                }
            }
        }
        return ans;
    }
};