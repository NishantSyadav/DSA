class Solution {
public:
     bool check(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            if (s[left] == s[right]) {
                left++;
                right--;
            }
            //to check which among left or right char be deleted
            else {
                return check(s, left + 1, right) ||
                       check(s, left, right - 1);
            }
        }

        return true;
    }
};