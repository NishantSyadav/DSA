class Solution {
public:
    bool xorGame(vector<int>& nums) {

        int x = 0;

        for (int num : nums) {
            x ^= num;
        }

        if (x == 0 || nums.size() % 2 == 0)
            return true;

        return false;
    }
};