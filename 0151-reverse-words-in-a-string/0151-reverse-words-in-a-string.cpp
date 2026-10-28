class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end()); // reverse the whole string first
        int n = s.length();
         int i = 0;

        for (int j = 0; j < n; j++) { // traverse the reversed string
            if (s[j] != ' ') { // ignore spaces and process only at a word

                if (i > 0) {
                    s[i++] = ' '; // add one space between two words
                }
                int start = i;

                while (j < n && s[j] != ' ') { // copy complete word to the front of the string
                    s[i++] = s[j++];
                }

                reverse(s.begin() + start, s.begin() + i); // reverse the particular word to get back original word 
                j--;
            }
        }
        s.resize(i); // remove extra spaces 
        return s;
    }
};