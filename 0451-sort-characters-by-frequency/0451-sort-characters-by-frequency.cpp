class Solution {
public:
   static bool cmp(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char ch : s) {              //store char and freq in map
            freq[ch]++;
        }

        vector<pair<char, int>> v;

        for (auto it : freq) {      //store in vector to sort the frequencies 
            v.push_back(it);
        }

        sort(v.begin(), v.end(), cmp);      //sort on the basis of freq

        string ans = "";

        for (auto it : v) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};