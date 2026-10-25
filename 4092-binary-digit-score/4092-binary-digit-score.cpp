class Solution {
public:
    int countBits(int n) {
        int count = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                count++;
            }
            n = n / 2;
        }
        return count;
    }
    int calculateScore(int a, int b) {

        int s1 = countBits(a);
        int s2 = countBits(b);

        if (s1 >= s2) {
            return s1 * s2;
        }

        return s2 / s1;
    }
};