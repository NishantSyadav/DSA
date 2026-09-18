class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a = 0;
        int b = 0;
        int ans = -1; // ans = -1 as if no comman value then ans = -1

        while (a < nums1.size() && b < nums2.size()) {

            if (nums1[a] == nums2[b]) {
                ans = nums1[a];
                break; // break because comparing further element is of no use
                       // as they will give greater numbers as ans
            }

            else if (nums1[a] > nums2[b]) {
                b++;
            }

            else if (nums1[a] < nums2[b]) {
                a++;
            }
        }

        return ans;
    }
};