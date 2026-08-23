class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,int upper) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int start = lower;

        for (int x : nums) {

            if (x < start)
                continue;

            if (x > upper)
                break;

            if (x > start) {
                ans.push_back({start, x - 1});
            }

            start = x + 1;
        }

        if (start <= upper) {
            ans.push_back({start, upper});
        }

        return ans;
    }
};