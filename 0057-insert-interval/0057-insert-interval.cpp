class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> nums;
        int a = newInterval[0];
        int b = newInterval[1];
        intervals.push_back({a, b});
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        if (n == 0 || n == 1)
            return intervals;
        for (int i = 0; i < n;) {
            a = intervals[i][0];
            b = intervals[i][1];
            int j = i + 1;
            while (j < n && b >= intervals[j][0]) {
                b = max(b, intervals[j][1]);
                j++;
            }
            nums.push_back({a, b});
            i = j;
        }
        return nums;
    }
};