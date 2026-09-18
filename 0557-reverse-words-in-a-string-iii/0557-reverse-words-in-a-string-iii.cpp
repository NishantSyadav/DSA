class Solution {
public:
    string reverseWords(string s) {

        int j = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] != ' ') {  //count size of each word
                j++;
            }

            if (s[i] == ' ') {  //when space comes, start reversing the word
                reverse(s.begin() + i - j, s.begin() + i);
                j = 0;
            }
        }

        // Reverse the last word
        reverse(s.end() - j, s.end());

        return s;
    }
};