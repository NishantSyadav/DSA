class Solution {
public:
    int value(string word) { // converts string to number

        int num = 0;
        for (char ch : word) {
            num = num * 10 + (ch - 'a');
        }
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {

        int word1 = value(firstWord);
        int word2 = value(secondWord);
        int target = value(targetWord);

        if (word1 + word2 == target) {
            return true;
        }
        return false;
    }
};