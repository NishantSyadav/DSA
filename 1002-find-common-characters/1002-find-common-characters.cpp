class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        map<char, int> common;

        for (char ch : words[0]) {
            common[ch]++;
        }

        for (int i = 1; i < words.size(); i++) {

            map<char, int> temp;

            for (char ch : words[i]) {
                temp[ch]++;
            }

            for (auto &it : common) {
                it.second = min(it.second, temp[it.first]);
            }
    }

        vector<string> ans;

        // Add characters according to final frequency
        for (auto it : common) {
            while (it.second > 0) {
                ans.push_back(string(1, it.first));
                it.second--;
            }
        }

        return ans;
    }
};