class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> ans(2);
        set<int> st1;
        set<int> st2;

        for (int x : nums1) {
            st1.insert(x);
        }

        for (int x : nums2) {
            st2.insert(x);
        }

        for (int x : st1) {
            if (st2.find(x) == st2.end()) {   // condition that the element of st1 is not present in st2
                ans[0].push_back(x);
            }
        }

        for (int x : st2) {
            if (st1.find(x) == st1.end()) {   //condition that the element of st2 is not present in st1
                ans[1].push_back(x);
            }
        }
     return ans;
    }
};