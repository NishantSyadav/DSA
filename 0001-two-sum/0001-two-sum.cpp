class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        unordered_map<int, int>m;
        vector<int>ans;

        for(int i=0;i<size;i++){
            int first=nums[i];
            int second=target-first;

            if(m.find(second )!= m.end()){    // it means that we have got our second value in the map
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first]=i;  // if second not found then store the present number in the map
        }
        return ans;
    }
};