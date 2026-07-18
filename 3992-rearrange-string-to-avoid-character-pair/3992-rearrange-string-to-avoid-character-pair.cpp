class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char ch : s)
            freq[ch - 'a']++;

        string ans = "";

        // Add all characters except x and y
        for (int i = 0; i < 26; i++) {
            char ch = i + 'a';

            if (ch == x || ch == y)
                continue;

            while (freq[i] > 0) {
                ans += ch;
                freq[i]--;
            }
        }

        // Add all y's
        while (freq[y - 'a'] > 0) {
            ans += y;
            freq[y - 'a']--;
        }

        // Add all x's
        while (freq[x - 'a'] > 0) {
            ans += x;
            freq[x - 'a']--;
        }

        return ans;
    }
};