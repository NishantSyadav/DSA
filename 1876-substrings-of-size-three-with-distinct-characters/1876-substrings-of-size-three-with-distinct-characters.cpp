class Solution {
public:
    int countGoodSubstrings(string s) {

        int p = 0; // 1st index of substr
        int q = 2; // last index of substr
        int count = 0;

        while (q < s.length()) {
            // compare all the 3 elements of the substring that they should not
            // be equal
            if (s[p] != s[p + 1] && s[p] != s[q] && s[p + 1] != s[q]) {
                count += 1;
            }
            p++;
            q++;
        }
        return count;
    }
};