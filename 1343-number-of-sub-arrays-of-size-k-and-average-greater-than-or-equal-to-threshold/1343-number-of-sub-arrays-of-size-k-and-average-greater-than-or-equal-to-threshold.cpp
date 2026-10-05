class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int sum = 0;
        int count = 0;

        for (int i = 0; i < k; i++) { // finding sum of first k elements
            sum += arr[i];
        }

        if (sum >= k * threshold) { // sum/k > threshold
            count++;
        }

        for (int i = k; i < arr.size(); i++) {
        // add next element after from right and remove start element from window
            sum += arr[i] - arr[i - k];

            if (sum >= k * threshold) {
                count++;
            }
        }
        return count;
    }
};