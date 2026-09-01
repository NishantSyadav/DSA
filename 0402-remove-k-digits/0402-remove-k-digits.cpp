class Solution {
public:
    string removeKdigits(string num, int k) {

        stack<char> st;

        for (char c : num) {

            while (!st.empty() && k > 0 && st.top() > c) { // while prev digit is > curr digit
                st.pop();    // remove previous digit
                k--;
            }

            st.push(c);    // push new digit
        }

        while (k > 0) {  //  if every digit of a num is increasing(12345)
            st.pop();
            k--;
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        if (ans == ""){  // if ans becomes empty
            return "0";
        }

        return ans;
    }
};