class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) {
            return -1;
        }
        int pos = -1;
        for (int i = 0; haystack[i] != '\0'; i++) {
            int a = 0, b = i;
            if (haystack[b] == needle[a]) {
                pos = i;
                a++;
                b++;
                while (a < needle.size()) {
                    if (haystack[b] == needle[a]) {
                        a++;
                        b++;
                    } else
                    {
                        pos = -1;
                        break;
                    }
                }
            }
            if (pos != -1)
                break;
            else
                pos = -1;
        }
        return pos;
    }
};