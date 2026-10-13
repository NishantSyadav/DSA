class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {

        vector<int> ans;
        int count = 0;
        int sum = 0;
        int i = 0;

        for (int j = 0; j < s.length(); j++) {
            ans.push_back(abs(s[j] - t[j]));
        }

        for (int j = 0; j < ans.size(); j++) {
            sum += ans[j];
            while (sum > maxCost) {
                sum -= ans[i];
                i++;
            }
            count = max(count, j - i + 1);
        }
        return count;
    }
};