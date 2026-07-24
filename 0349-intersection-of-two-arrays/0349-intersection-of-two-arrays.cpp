class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i : nums1) {
            mp[i] = 1;
        }

        for (int num : nums2) {
            if (mp[num] == 1) {
                ans.push_back(num);
                mp[num] = 0;
            }
        }
        return ans;
    }
    };