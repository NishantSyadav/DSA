class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int ans = 1000;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {

                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        int dist = 2 * (k - i);
                        ans = min(ans, dist);
                    }
                }
            }
        }

        if (ans == 1000) {
            return -1;
        } else {
            return ans;
        }
    }
};