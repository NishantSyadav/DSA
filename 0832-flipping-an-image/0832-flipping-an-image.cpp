class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int row = image.size();
        int col = image[0].size();

        for (int i = 0; i < col; i++) {
            int left = 0;
            int right = col - 1;

            while (left <= right) {

                int temp = image[i][left];
                image[i][left] = image[i][right] ^ 1;  //XOR operation as it will invert the bits(0->1 , 1->0)
                image[i][right] = temp ^ 1;

                left++;
                right--;
            }
        }
        return image;
    }
};