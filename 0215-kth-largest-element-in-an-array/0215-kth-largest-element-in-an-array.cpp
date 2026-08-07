class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // // {1,2,5,5,5,5,5}, ans will be=5 for all k=1,2,3,4,5
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()-k];

        priority_queue<int>pq;
        for(int num:nums){
            pq.push(num);
        }
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};