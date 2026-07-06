class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long happy = 0;
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        vector<int> custom;
        int a = 1, p = k - 1;
        while (p >= 0) {
            custom.push_back(happiness[n - a]);
            a++;
            p--;
        }
        a = 0;
        while (a < custom.size()) {
            custom[a] = custom[a] - a;
            a++;
        }
        for (auto it : custom) {
            if (it >= 0)
                happy += it;
        }
        return happy;
    }
};