class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        int size1 = word1.length();
        int size2 = word2.length();
        string ans;

        while(i < size1 || j < size2){
            if(i < size1){
                ans += word1[i];
                i++;
            }

            if(j < size2){
                ans += word2[j];
                j++;
            }
        }
        return ans;
    }
};