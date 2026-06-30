class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> s1, t1;
        for (auto it : s) {
            s1[it]++;
        }
        for (auto it : t) {
            t1[it]++;
        }
        for (auto it : t1) {
            if (it.second != s1[it.first])
                return it.first;
        }
        return '\0';
    }
};