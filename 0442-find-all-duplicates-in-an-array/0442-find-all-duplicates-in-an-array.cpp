class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++; // store all nums with thier freq
        }

        for (auto it : mp) {
            if (it.second == 2) {//check numbers having freq = 2
                ans.push_back(it.first);//store those nums in ans 
            }
        }
        return ans;
    }
};