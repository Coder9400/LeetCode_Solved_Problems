class Solution {
public:
    bool check(int n) {
        if (n == 1)
            return 1;
        else if (n % 2 != 0)
            return 0;
        return check(n / 2);
    }
    bool isPowerOfTwo(int n) {
        if (n == 0 || n == -1)
            return 0;
        return check(n);
    }
};