class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        
        int size = s.length();
        int ans = 0;
        int i = 0;

        while(i < size){
            int zeros = 0, ones = 0;

            while(i < size && s[i] == '0'){ // count no. of conseutive zeros
                zeros++;
                i++;
            }

            while(i < size && s[i] == '1'){ // count no. of consecuetive ones
                ones++;
                i++;
            }
            ans = max(ans, 2* min(zeros, ones));  //min(0,1) means length where no. of 0&1 are equal
        }
        return ans;
    }
};