class Solution {
public:
    void merge_sort(vector<int>& nums, int beg, int mid, int end) {
        int start = beg;
        int finish = mid + 1;
        vector<int> vec;
        while (start <= mid && finish <= end) {
            if (nums[start] <= nums[finish]) {
                vec.push_back(nums[start]);
                start++;
            } else {
                vec.push_back(nums[finish]);
                finish++;
            }
        }
        while (start <= mid) {
            vec.push_back(nums[start]);
            start++;
        }
        while (finish <= end) {
            vec.push_back(nums[finish]);
            finish++;
        }
        for (int i = 0; i < vec.size(); i++) {
            nums[beg + i] = vec[i];
        }
    }
    void merge(vector<int>& nums, int beg, int end) {
        if (beg < end) {
            int mid = (beg + end) / 2;
            merge(nums, beg, mid);
            merge(nums, mid + 1, end);
            merge_sort(nums, beg, mid, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> vec;
        for (auto it : nums) {
            vec.push_back(it);
        }
        merge(vec, 0, nums.size() - 1);
        return vec;
    }
};