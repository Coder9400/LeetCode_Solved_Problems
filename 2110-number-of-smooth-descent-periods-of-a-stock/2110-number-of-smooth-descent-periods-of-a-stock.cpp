class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 0;
        count = prices.size();
        int a = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            int j = i + 1;
            while (j < prices.size() && (prices[j - 1] - prices[j] == 1))
                j++;
            long long p = j - i - 1;
            count += (p * (p + 1)) / 2;
            i = j - 1;
        }
        return count;
    }
};