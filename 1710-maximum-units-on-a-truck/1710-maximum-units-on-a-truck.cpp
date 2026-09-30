class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        // sort in descending order on basis of no. of units per box
        sort(boxTypes.begin(), boxTypes.end(),
             [](auto a, auto b) { return a[1] > b[1]; });
             
        int ans = 0;

        for (auto box : boxTypes) {
            int take =
                min(box[0],
                    truckSize); // min between current no. of boxes & trucksize

            ans += take * box[1];
            truckSize -= take; // update truckSize

            if (truckSize == 0) { // if truckSize is 0
                break;
            }
        }
        return ans;
    }
};