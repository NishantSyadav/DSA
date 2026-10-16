
class Solution {
public:
    int subarray(vector<int>& nums, int k) {
        int count = 0;
        int i = 0;
        int odd = 0;

        for (int j = 0; j < nums.size(); j++) {

            if (nums[j] % 2 != 0) {
                odd++;
            }

            while (odd > k) {
                if (nums[i] % 2 != 0) {
                    odd--;
                }
                i++;
            }

            count += j - i + 1;
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return subarray(nums, k) - subarray(nums, k - 1);
    }
};
