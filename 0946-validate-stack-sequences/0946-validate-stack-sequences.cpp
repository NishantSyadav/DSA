class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;
        int j = 0;

        for (int x : pushed) {
            st.push(x);

            while (!st.empty() &&
                   st.top() == popped[j]) { // if top of stack is equal to
                                            // elemnt to be poped
                st.pop();
                j++;
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};