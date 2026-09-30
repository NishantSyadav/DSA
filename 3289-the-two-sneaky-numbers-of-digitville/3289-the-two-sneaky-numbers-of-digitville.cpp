class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto it : mp) {
            if (it.second == 2) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};



  // Solution with O(1) space complexity

    // sort(nums.begin(), nums.end());

    //     vector<int> ans;

    //     for (int i = 1; i < nums.size(); i++) {
    //         if (nums[i] == nums[i - 1]) {
    //             ans.push_back(nums[i]);
    //         }
    //     }

    //     return ans;
    // }