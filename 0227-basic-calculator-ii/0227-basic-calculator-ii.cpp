class Solution {
public:
    int calculate(string s) {

        stack<int> st;
        int num = 0;
        char op = '+';   // take initial operator as '+'

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');   //If current character is a number
            }
             
             //If we reach an operator OR the end of the string, process the number we have built
            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {

                if (op == '+')
                    st.push(num);

                else if (op == '-')
                    st.push(-num);

                else if (op == '*') {    // if operator is '*' solve at that moment 
                    int x = st.top();
                    st.pop();
                    st.push(x * num);
                }

                else if (op == '/') {
                    int x = st.top();
                    st.pop();
                    st.push(x / num);
                }

                op = s[i];   //update operator
                num = 0;
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};