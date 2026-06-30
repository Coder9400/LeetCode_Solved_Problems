class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string ans;
        for (int i = 0; i < s.length(); i++) {
            string p;
            while (i < s.length() && s[i] != ' ') {
                p += s[i];
                i++;
            }
            if (p.length() > 0) {
                reverse(p.begin(), p.end());
                ans += " " + p;
            }
        }
        int j = 0;
        while (ans[j] == ' ')
            j++;

        return ans.substr(j);
    }
};