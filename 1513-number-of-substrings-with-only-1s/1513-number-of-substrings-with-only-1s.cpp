class Solution {
public:
    int numSub(string s) {
        long long sum = 0;
        int n = s.length();
        long long p = 1e9 + 7;
        long long a = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                a++;
            else {
                sum = (sum + (((a + 1) * a) / 2) % p) % p;
                a = 0;
            }
        }
        sum = (sum + (((a + 1) * a) / 2) % p) % p;
        return sum;
    }
};