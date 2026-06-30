class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (auto it : nums) {
            sum += it;
        }
        for (int i = 0; i < n; i++) {
            int sum1 = 0, sum2 = 0;
            int c = nums[i];
            if (i == 0)
                sum1 = 0;
            else {
                nums[i] = nums[i - 1] + nums[i];
                sum1 = nums[i] - c;
            }
            if (i == n - 1)
                sum2 = 0;
            else {
                sum2 = sum - nums[i];
            }
            if (sum1 == sum2)
                return i;
        }
        return -1;
    }
};