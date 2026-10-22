class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_set<char> st;

        for (char c : word) {
            st.insert(c);
        }
        int count = 0;

        for (char i = 'a'; i <= 'z'; i++) {
            if (st.count(i) && st.count(toupper(i))) {
                count++;
            }
        }
        return count;
    }
};