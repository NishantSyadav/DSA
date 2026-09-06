class Solution {
public:
    int countRotations(string s, int k) {

        int n = s.length();
        int ans = 0;

        for (int start = 0; start < n; start++) {

            string t = s.substr(start) + s.substr(0, start);

            int score = 0;
            for (int i = 0; i < n - 1; i++) {
                if (t[i] == t[i + 1]) {
                    score++;
                }
            }

            if (score == k) {
                ans++;
            }
        }

        return ans;
    }
};