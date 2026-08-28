class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        for (int i = triangle.size() - 2; i >= 0;i--) { // start from 2nd last row

            for (int j = 0; j < triangle[i].size(); j++) {
                // Add the minimum of the two possible paths from the next row
                triangle[i][j] +=
                    min(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }

        return triangle[0][0];
    }
};