class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> nums;
        if (n == 0 || n == 1)
            return intervals;
        for (int i = 0; i < n; i++) {
            int a = intervals[i][0];
            int b = intervals[i][1];
            int g = a, f = b;
            for (int j = i + 1; j < n; j++) {
                int c = intervals[j][0];
                int d = intervals[j][1];
                if (b >= c) {
                    g = min(a, c);
                    f = max(b, d);
                    a = g;
                    b = f;
                    i = j;
                } else
                    break;
            }
            nums.push_back({g, f});
        }
        return nums;
    }
};