class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {

        vector<int> req;
        int ans = 0;

        for (int i = 0; i < capacity.size(); i++) { //store req rocks for each bag
            req.push_back(capacity[i] - rocks[i]);
        }

        sort(req.begin(), req.end());

        for (int i = 0; i < req.size(); i++) {
            if (additionalRocks >= req[i]) { //if extra rocks are present for a bag
                additionalRocks -= req[i];
                ans++;
            } else {
                break;
            }
        }
        return ans;
    }
};