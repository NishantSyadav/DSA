class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
         unordered_map<int, int> mp;

        for (int num : nums) {
            if (mp.find(num) != mp.end()) {
                return true;
            }
            mp[num]++;
        }

        return false;
    }
};