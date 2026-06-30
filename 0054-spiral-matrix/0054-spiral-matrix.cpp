class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++) {
                vec.push_back(matrix[top][j]);
            }
            top++;
            for (int j = top; j <= bottom; j++) {
                vec.push_back(matrix[j][right]);
            }
            right--;
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    vec.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int j = bottom; j >= top; j--) {
                    vec.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return vec;
    }
};