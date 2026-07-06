class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = strs.size();
        int cols = strs[0].size();
        vector<string> sp;
        for (int i = 0; i < cols; i++) {
            string sp1 = "";
            for (int j = 0; j < rows; j++) {
                sp1 += strs[j][i];
            }
            sp.push_back(sp1);
        }
        int del = 0;
        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows - 1; j++) {
                if (sp[i][j] > sp[i][j + 1]) {
                    del++;
                    break;
                }
            }
        }
        return del;
    }
};