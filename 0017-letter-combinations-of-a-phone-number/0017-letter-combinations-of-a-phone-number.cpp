class Solution {
public:
    vector<string> ans;   // Stores all possible combinations

    void backtrack(string &digits, int index, string &curr, vector<string> &mp){
        if(index == digits.size())  //if one combination is formed
        {
            ans.push_back(curr);
            return;
        }

        // Get the letters corresponding to the current digit.
        string letters = mp[digits[index] - '0'];

        // Try every letter for the current digit.
        for(char ch : letters)
        {
            curr.push_back(ch);

            // Move to the next digit
            backtrack(digits, index + 1, curr, mp);
            curr.pop_back();    // backtrack
        }
    }

    vector<string> letterCombinations(string digits)
    {
        // If input is empty, return empty answer.
        if(digits.empty())
            return {};
            
        vector<string> mp = {
            "", "",      // 0 and 1 have no letters
            "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };

        string curr = "";    // Stores current combination

        // Start recursion from the first digit (index = 0)
        backtrack(digits, 0, curr, mp);

        return ans;
    }
};