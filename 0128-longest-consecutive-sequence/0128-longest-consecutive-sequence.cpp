class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st;

        for (int x : nums) {
            st.insert(x);
        }

        int maxLen = 0;

        for (int x : st) {

            // x is the beginning of a sequence
            if (st.find(x - 1) == st.end()) {

                int curr = x;
                int len = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    len++;
                }

                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};