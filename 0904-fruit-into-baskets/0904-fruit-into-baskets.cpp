class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int l = 0, maxLen = 0;
        map<int, int> m;

        for (int h = 0; h < fruits.size(); h++) {
            m[fruits[h]]++;
            while (m.size() > 2) {
                m[fruits[l]]--;
                if (m[fruits[l]] == 0) {
                    m.erase(fruits[l]);
                }
                l++;
            }
            maxLen = max(maxLen, h - l + 1);
        }
        return maxLen;
    }
};