class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = 0;
        int pro = 1;
        if (nums.size() > 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > a)
                    a = nums[i];
                pro = nums[i];
                for (int j = i + 1; j < nums.size(); j++) {
                    pro = pro * nums[j];
                    if (pro >= a)
                        a = pro;
                }
            }
        } else
            a = nums[0];
        return a;
    }
};