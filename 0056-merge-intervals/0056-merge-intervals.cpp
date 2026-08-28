class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());   //sort vector on basis of starting values
        vector<vector<int>> ans;

        ans.push_back(intervals[0]);   //store 1st vector in ans

        for (int i = 1; i < intervals.size(); i++) {

            //if end val of 1st vector >= start val of 2nd vector
            if (ans.back()[1] >= intervals[i][0]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            } 
            else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};