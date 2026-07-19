class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
          unordered_set<char> st;

        // Store all jewels
        for(char ch : jewels){
            st.insert(ch);
        }

        int count = 0;

        // Count stones that are jewels
        for(char ch : stones){
            if(st.count(ch))
                count++;
        }

        return count;
    }
};