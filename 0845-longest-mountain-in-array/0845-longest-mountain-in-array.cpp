class Solution {
public:
    int longestMountain(vector<int>& arr) {

        int size = arr.size();
        int ans = 0;
        int i = 0;

        while (i < size - 2) { // size-2 because mountain need atleat 3 elements

            int start = i;

            while (i + 1 < size && arr[i] < arr[i + 1]) { // increasing part
                i++;
            }

            if (i == start) { // if no increasing part at start then move to next number
                i++;
                continue; // continue so for next num everything starts from starting
            }

            int peak = i; // store the peak index

            while (i + 1 < size && arr[i] > arr[i + 1]) { // decreasing part
                i++;
            }

            if (i == peak) { // if no decreasing part
                i = peak + 1;
                continue;
            }

            ans = max(ans, i - start + 1);
            i = peak + 1; // keep searching
        }
        return ans;
    }
};