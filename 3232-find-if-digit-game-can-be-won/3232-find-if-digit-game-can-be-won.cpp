class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int sum = 0;
        int BigSum = 0;
        
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] <= 9){
                sum += nums[i];
            }
            else{
                BigSum += nums[i];
            }
        }
        if(sum == BigSum){
            return false;
        }
        return true;
    }
};