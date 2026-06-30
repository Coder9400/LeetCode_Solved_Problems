class Solution {
public:
    int countPrimes(int n) {
        // UNORDERD MAP IS COMPARITIVELY SLOWER THAN VECTOR
        vector<int> hash;
        for (int i = 0; i <= n; i++) {
            hash.push_back(0);
        }
        for (int i = 0; i <= n; i++) {
            hash[i]++;
        }
        for (int i = 2; i * i <= n; i++) {
            if (hash[i] == 1) {
                for (int j = i * i; j <= n; j += i) {
                    hash[j] = 0;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 || i == 1)
                continue;
            else if (hash[i] == 1) {
                sum++;
            }
        }
        return sum;
    }
};