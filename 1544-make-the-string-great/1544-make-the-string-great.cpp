class Solution {
public:
    string makeGood(string s) {

        stack<char> st;

        for (char c : s) {
            //if top element and element to be inserted are same then pop
            if (!st.empty() && ((st.top() == c + 32) || (st.top() == c - 32))) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();    // pop element from stack after inserting it in ans string
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};