class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                "-.--", "--.."};

        unordered_set<string> st;

        for (string word : words) {

            string code = "";

            for (char ch : word) {
                code += morse[ch - 'a'];         // find value of each char at the index by ch - 'a'
            }

            st.insert(code);
        }

        return st.size();
    }
};