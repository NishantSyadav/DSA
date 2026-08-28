class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        // creates temp  string of size same that of original str(s) with
        // initial pos filled with spaces
        string temp(s.size(), ' ');

        for (int i = 0; i < s.size(); i++) {
            temp[indices[i]] = s[i];
        }

        return temp;
    }
};