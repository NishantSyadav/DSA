class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n, 0);

        // Step 1: Left to Right pass
        int prev = -n; //large negative number
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                prev = i;
            }
            ans[i] = i - prev;
        }

        // Step 2: Right to Left pass
        prev = 2 * n; //large positive number
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) {
                prev = i;
            }
            ans[i] = min(ans[i], prev - i);
        }

        return ans;
    }
};