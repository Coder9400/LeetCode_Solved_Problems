class Solution {
public:
    int binary_search(vector<int>& nums, int target) {
        int beg = 0;
        int end = nums.size() - 1;
        int mid = 0;
        int f = 0;
        while (beg <= end) {
            mid = (beg + end) / 2;
            if (nums[mid] == target) {
                f = 1;
                break;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else
                beg = mid + 1;
        }
        if (f == 1)
            return mid;
        else
            return -1;
    }

    int search(vector<int>& nums, int target) {
        return binary_search(nums, target);
    }
};