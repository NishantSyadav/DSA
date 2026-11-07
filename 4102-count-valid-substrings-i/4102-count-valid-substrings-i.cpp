class Solution {
public:
    long long countValidSubstrings(string s) {

        int n = s.length();

        long long total = (1LL * n * (n + 1)) / 2;
        long long invalid = 0;

        int last = -1;

        for (int i = 2; i < n; i++) {

            if (s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c') {

                last = i - 2;
            }

            invalid += (last + 1);
        }

        return total - invalid;
    }
};