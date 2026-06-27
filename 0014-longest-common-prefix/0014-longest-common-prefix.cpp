class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char s[300];
        int d = strs.size();
        if (d > 1) {
            int min = INT_MAX;
            for (int i = 0; i < d; i++) {
                int n = 0;
                for (int j = 0; strs[i][j] != '\0'; j++) {
                    n++;
                }
                if (min > n)
                    min = n;
            }

            int a = 0;
            for (int i = 0; i < min; i++) {
                char ch;
                int p = 0;
                int j = 0;
                while (j < strs.size() && i < strs[j].size()) {
                    if (j == 0)
                        ch = strs[j][i];
                    else if (ch == strs[j][i])
                        p = 1;
                    else if (ch != strs[j][i]) {
                        p = 0;
                        break;
                    }
                    j++;
                }
                if (p == 1) {
                    s[a] = ch;
                    a++;
                } else
                    break;
            }
            return s;
        } else
            return strs[0];
    }
};