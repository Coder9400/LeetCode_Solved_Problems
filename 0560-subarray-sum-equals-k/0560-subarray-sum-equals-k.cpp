class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int a = 0;
        int sum;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == k)
                a++;
            sum = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                sum = sum + nums[j];
                if (sum == k)
                    a++;
            }
        }
        return a;
    }
};