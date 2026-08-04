class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;

        // Count frequency
        for (int num : nums) {
            mp[num]++;
        }

        // Max Heap -> {frequency, number}
        priority_queue<pair<int, int>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};