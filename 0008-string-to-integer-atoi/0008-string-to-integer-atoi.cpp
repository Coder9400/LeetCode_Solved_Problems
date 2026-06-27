class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int i = 0;
        int n = s.length();

        while (i < n && s[i] == 32) {
            i++;
        }
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            sign = 1;
            i++;
        }
        for (int k = i; k < n; k++) {
            if (s[k] >= '0' && s[k] <= '9') {
                int b = s[k] - '0';
                ans = ans * 10 + b;
            } else
                break;
            if (sign == 1 && ans > INT_MAX)
                return INT_MAX;
            if (sign == -1 && sign * ans < INT_MIN)
                return INT_MIN;
        }
        return (int)(sign * ans);
    }
};