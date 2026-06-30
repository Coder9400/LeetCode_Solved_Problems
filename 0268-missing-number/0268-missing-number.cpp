class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0,sum2 = 0;
        int a = nums.size();
        for(int i=0;i<a;i++)
        {
            sum1 = sum1 + nums[i];
            sum2 = sum2 + (i+1);
        }
        return (sum2-sum1);
    }
};