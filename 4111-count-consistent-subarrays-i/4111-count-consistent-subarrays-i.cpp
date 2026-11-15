class Solution {
public:
    int countConsistent(vector<int>& nums) {

        int n = nums.size();
        long long count = 0;

        for (int i = 0; i < n; i++) {
            int a = nums[i], b = nums[i];

            for (int j = i; j < n; j++) {
                a = a & nums[j];
                b = min(b, nums[j]);

                if (a == b)
                    count++;
            }
        }

        return count;
    }
};