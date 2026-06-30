class Solution {
public:
    bool binary_search(vector<int>& nums, int start, int finish, int original) {
        int mid;
        while (start <= finish) {
            mid = (start + finish) / 2;
            if (nums[mid] == original) {
                return 1;
            } else if (nums[mid] < original) {
                start = mid + 1;
            } else
                finish = mid - 1;
        }
        return 0;
    }
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = original;
        int max = nums[n - 1];
        while (original <= max) {
            if (binary_search(nums, 0, n - 1, sum) == 1) {
                sum = sum * 2;
            } else
                break;
        }
        return sum;
    }
};