class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;

        int left  = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;
        int direction = 0;

        while (left <= right && top <= bottom) {
            // left -> right
            if (direction == 0) {
                for (int col = left; col <= right; col++) {
                    result.push_back(matrix[top][col]);
                }
                top++;
            }
            // top -> bottom
            else if (direction == 1) {
                for (int row = top; row <= bottom; row++) {
                    result.push_back(matrix[row][right]);
                }
                right--;
            }
            // right -> left
            else if (direction == 2) {
                for (int col = right; col >= left; col--) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }
            // bottom -> top
            else {
                for (int row = bottom; row >= top; row--) {
                    result.push_back(matrix[row][left]);
                }
                left++;
            }

            direction = (direction + 1) % 4; // Rotate direction
        }

        return result;
    }
};