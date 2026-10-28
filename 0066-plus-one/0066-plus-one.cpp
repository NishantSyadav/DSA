class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) { // if digit is less than 9 -> directly inc by 1
                digits[i]++;
                return digits;
            }

            digits[i] = 0; // if last digit is 1, make last digit 0 and give 1 carry
        }

        digits.insert(digits.begin(), 1); // if all digits are 9 then add 1 at starting
        
        return digits;
    }
};