class Solution {
public:
    bool binary(vector<int>& nums, int target) {
        int beg = 0;
        int end = nums.size() - 1;
        int mid;
        bool flag = 0;
        while (beg <= end) {
            mid = (beg + end) / 2;
            if (nums[mid] == target)
                return true;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                beg = mid + 1;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        return binary(nums, target);
    }
};