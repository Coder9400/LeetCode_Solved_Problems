class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0)
            return -1;
        int i = 1;
        int a = 0;
        while (i <= k) {
            a = (a * 10 + 1) % k;
            if (a == 0) {
                return i;
            }
            i++;
        }
        return -1;
    }
};