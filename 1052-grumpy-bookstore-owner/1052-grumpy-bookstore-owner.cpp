class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int satisfied = 0;

        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                satisfied += customers[i];
            }
        }
        int extra = 0;

        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                extra += customers[i];
            }
        }
        int maximum = extra;

        // Sliding window
        for (int i = minutes; i < customers.size(); i++) {

            // Add new element from right of the window
            if (grumpy[i] == 1) {
                extra += customers[i];
            }

            // Remove old element from left of the window
            if (grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }

            maximum = max(maximum, extra);
        }

        return satisfied + maximum;
    }
};