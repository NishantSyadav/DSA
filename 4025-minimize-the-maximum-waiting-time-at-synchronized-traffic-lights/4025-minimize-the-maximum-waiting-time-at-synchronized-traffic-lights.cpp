class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxGreen = 0;

        // Find the traffic light with the longest green phase
        for (int x : lights) {
            maxGreen = max(maxGreen, x);
        }

        int ans = 0;

        // Find the minimum possible waiting time for every car
        for (int t : arrivalTime) {

            int r = t % period;

            int wait;

            if (r < maxGreen) {
                wait = 0;
            } else {
                wait = period - r;
            }

            ans = max(ans, wait);
        }

        return ans;
    }
};