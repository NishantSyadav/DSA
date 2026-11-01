class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {

        int n = nums.size();

        int unlock = 0;
        int prefixMax = 0;

        // Step 1: Find mandatory unlock operations
        for (int i = 0; i < n; i++) {

            if (locked[i] == 1) {

                // This locked index can remain locked
                // only if it is at a valid sorted boundary.
                if (nums[i] != i + 1 || prefixMax != i) {
                    unlock++;
                }
            }

            prefixMax = max(prefixMax, nums[i]);
        }

        // Check unlock limit
        if (unlock > k) {
            return -1;
        }

        // Step 2: Count inversions (minimum adjacent swaps)
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > nums[j]) {
                    swaps++;
                }
            }
        }

        return swaps + unlock;
    }
};