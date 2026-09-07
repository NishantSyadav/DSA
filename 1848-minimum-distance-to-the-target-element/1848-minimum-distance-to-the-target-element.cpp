class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        int ans = 100000;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == target) {

                int distance = abs(i - start);

                if (distance < ans) {
                    ans = distance;
                }
            }
        }

        return ans;
    }
};