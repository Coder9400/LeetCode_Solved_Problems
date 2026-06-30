class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int a = INT_MAX;
        int total;
        int sum;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                total = nums[i] + nums[j] + nums[k];
                int diff = total - target;

                if (diff < 0)
                    diff = diff * (-1);

                if (diff < a) {
                    sum = total;
                    a = diff;
                }

                if (total < target)
                    j++;
                else if (total > target)
                    k--;
                else
                    return total;
            }
        }
        return sum;
    }
};