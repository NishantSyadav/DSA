class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++) {//calculate sum of first k elements
            sum += nums[i];
        }

        int maxSum = sum;

        // Slide window
        for (int i = k; i < nums.size(); i++) {
            sum +=nums[i]; // add the element present in right for window shifting
            sum -= nums[i - k]; // remove the element from start of left to keep
                                // window size = k

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};