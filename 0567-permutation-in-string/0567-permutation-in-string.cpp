class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> hash1;
        for (auto it : s1) {
            hash1[it]++;
        }
        int l1 = s1.length();
        int l2 = s2.length();
        for (int i = 0; i <= l2 - l1; i++) {
            map<char, int> hash2;
            int j = 0;
            while (j < l1) {
                hash2[s2[i + j]]++;
                j++;
            }
            int flag = 0;
            for (auto it : s1) {
                if (hash1[it] != hash2[it]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                return true;
        }
        return false;
    }
};