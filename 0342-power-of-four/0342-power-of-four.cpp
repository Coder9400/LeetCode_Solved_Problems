class Solution {
public:
    bool check(int n) {
        if (n == 1)
            return 1;
        else if (n % 4 != 0)
            return 0;
        return check(n / 4);
    }
    bool isPowerOfFour(int n) {
        if (n == 0 || n == -1)
            return 0;
        return check(n);
    }
};