class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int size = candyType.size();
        int n = size / 2;
        unordered_set<int>st;

        for(int x : candyType){
            st.insert(x);
        }

        int setSize = st.size();

        if(n > setSize){
            return setSize;
        }
        else{
            return n;
        }
    }
};