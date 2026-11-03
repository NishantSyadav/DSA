class Solution {
public:
    int minMoves(vector<int>& nums) {

        int maxi = 0;
        int sum = 0;
        int size = nums.size();
        
        for (int x : nums) {
            maxi = max(maxi, x);
            sum += x;
        }
        return (maxi * size) - sum;
    }
};