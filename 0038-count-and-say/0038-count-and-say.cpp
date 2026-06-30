class Solution {
public:
    string finalString;
    void c(char ch, int a) {
        finalString += to_string(a);
        finalString += ch;
    }
    void fun(string ch) {
        finalString = "";
        int i = 1;
        int b = 1;
        while (i < ch.length()) {
            if (ch[i] == ch[i - 1])
                b++;
            else {
                c(ch[i - 1], b);
                b = 1;
            }
            i++;
        }
        c(ch.back(), b);
    }
    string countAndSay(int n) {

        string ch = "1";
        while (n > 1) {

            fun(ch);
            n--;
            ch = finalString;
        }
        return ch;
    }
};