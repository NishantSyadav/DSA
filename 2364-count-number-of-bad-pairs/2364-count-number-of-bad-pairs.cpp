class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
         int n = nums.size();

        long long totalPairs = 1LL * n * (n - 1) / 2;
        long long goodPairs = 0;

        unordered_map<int, long long> mp;

        for (int i = 0; i < n; i++) {
            int key = nums[i] - i; //If two indices have the same (nums[i] - i), they form a good pair.

            goodPairs += mp[key];
            mp[key]++;   // Store/update the frequency of this key
        }

        return totalPairs - goodPairs;
    }
};