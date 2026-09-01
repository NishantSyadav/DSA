class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for (string s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {    // when we get an operand(+,-,*,/)
                int b = st.top();    // pop first number
                st.pop();

                int a = st.top();
                st.pop();     // pop the 2nd number

                if (s == "+")
                    st.push(a + b);
                else if (s == "-")
                    st.push(a - b);
                else if (s == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            } else {
                st.push(stoi(s));
            }
        }

        return st.top();   // top will be the answer
    }
};