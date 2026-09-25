class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_set<char> s;  // using set as it will store only unique elements

        for (char ch : sentence) {
            s.insert(ch);
        }

        return s.size() == 26;
    }
};