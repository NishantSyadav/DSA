class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
    unordered_map<int,int>mp;

    //store sum of nums1 and nums2
    for(int a : nums1){
        for(int b : nums2){
            mp[a+b]++;
        }
    }
     int count = 0;
//calculate sum of nums3+nums4
        for (int c : nums3) {
            for (int d : nums4) {
                int sum = c + d;

                if (mp.find(-sum) != mp.end()) {    //search for compliment of sum([nums1]+[sums2])
                    count += mp[-sum];
                }
            }
        }

        return count;
    }
};