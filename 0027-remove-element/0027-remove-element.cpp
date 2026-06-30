class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val)
                k++;
        }
        int a = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                a = i;
                for (int j = i + 1; j < n; j++) {
                    if (nums[j] != val) {
                        swap(nums[a], nums[j]);
                        break;
                    }
                }
            }
        }
        return k;
    }
};