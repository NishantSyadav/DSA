class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
         vector<string> words;
        string word = "";

        // Split the string into words
        for (char ch : s) {
            if (ch == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += ch;
            }
        }
        words.push_back(word);

        // Number of words must match pattern length
        if (words.size() != pattern.size())
            return false;

        unordered_map<char, string> mp1;   // character -> word
        unordered_map<string, char> mp2;   // word -> character

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string w = words[i];

            // Check character -> word mapping
            if (mp1.count(ch)) {
                if (mp1[ch] != w)
                    return false;
            } else {
                mp1[ch] = w;
            }

            // Check word -> character mapping
            if (mp2.count(w)) {
                if (mp2[w] != ch)
                    return false;
            } else {
                mp2[w] = ch;
            }
        }

        return true;
    }
};