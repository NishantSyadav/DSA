class Solution {
public:
    int maxVowels(string s, int k) {

        int count = 0;
        int maxi = 0;

        // First window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }

        maxi = count;

        // Sliding window
        for (int i = k; i < s.size(); i++) {

            // Add new character from right 
            if (isVowel(s[i])) {
                count++;
            }

            // Remove old character from left 
            if (isVowel(s[i - k])) {
                count--;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }
};