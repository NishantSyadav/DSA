class Solution {
public:
    int secondHighest(string s) {

        int largest = -1;
        int second = -1;

        for (char x : s) {

            if (x >= '0' && x <= '9') {

                int num = x - '0';  // converts char into int

                if (num > largest) {
                    second = largest;
                    largest = num;
                } else if (num > second && num < largest) {
                    second = num;
                }
            }
        }

        return second;
    }
};