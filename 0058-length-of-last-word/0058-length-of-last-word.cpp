class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] != 32)
                n++;

            else if (s[i] == 32) {
                for (int j = i + 1; s[j] != '\0'; j++) {
                    if (s[j] != 32) {
                        n = 0;
                        break;
                    }
                }
            }
        }
        return n;
    }
};