class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
            unordered_map<string, vector<string>> mp;

        for (string word : strs) {
            string key = word;
            sort(key.begin(), key.end());   // Create the sorted key
            mp[key].push_back(word);        // Group original word
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};