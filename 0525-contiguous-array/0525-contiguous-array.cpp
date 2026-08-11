class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        int sum = 0;
        int maxLen = 0;

        // prefix sum = 0 before the array starts
        mp[0] = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                sum--;
            else
                sum++;

            // Same sum appeared before
            if (mp.find(sum) != mp.end()) {
                maxLen = max(maxLen, i - mp[sum]);
            }
            else {
                // Store only the first occurrence
                mp[sum] = i;
            }
        }

        return maxLen;

    }
};