class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int arr[20][20];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                arr[i][j] = matrix[i][j];
            }
        }
        matrix.clear();
        vector<vector<int>> vec(n);
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                vec[i].push_back(arr[j][i]);
            }
        }
        matrix = vec;
    }
};