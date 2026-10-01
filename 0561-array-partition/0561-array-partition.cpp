class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int ans = 0;

        for (int i = 0; i < nums.size(); i += 2) {//skip 1 element and add only the first element of the pair as it will be min for that pair
            ans += nums[i];
        }
        return ans;
    }
};