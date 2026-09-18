class Solution {
public:
    string reverseStr(string s, int k) {

        for (int start = 0; start < s.length(); start += 2 * k) {

            int left = start;
            //min handls the case whhen in end less char are remaining & size goes out of bound
            int right = min(start + k - 1, (int)s.length() - 1);

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};