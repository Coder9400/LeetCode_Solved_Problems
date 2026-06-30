class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                int a = 0;
                for (int j = i + 1; j < n; j++) {
                    if (nums[j] == 0)
                        a++;
                    else if (a >= k) {
                        i = j - 1;
                        break;
                    } else {
                        return false;
                    }
                }
            } else if (i == n - 1 && nums[i] == 1)
                return true;
        }
        return true;
    }
};