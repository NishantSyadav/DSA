class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        vector<int> odd;
        vector<int> even;
        vector<int> ans;

        for (int i = 1; i < nums.size(); i += 2) {
            odd.push_back(nums[i]);
        }
        for (int j = 0; j < nums.size(); j += 2) {
            even.push_back(nums[j]);
        }

        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());

        int a = 0, b = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                ans.push_back(even[a]);
                a++;
            } else {
                ans.push_back(odd[b]);
                b++;
            }
        }
        return ans;
    }
};