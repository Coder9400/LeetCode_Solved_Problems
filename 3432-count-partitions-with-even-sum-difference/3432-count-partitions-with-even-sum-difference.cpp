class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;
        int count = 0;
        for (auto it : nums)
            total += it;
        for (int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i] - (total - nums[i])) % 2 == 0)
                count++;
        }
        return count;
    }
};