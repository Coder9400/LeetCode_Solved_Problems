class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int min = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>min) min = nums[i];
        }
        int hash[min+1];
        for(int i=0;i<=min;i++)
        {
            hash[i] = 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        int dup = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(hash[nums[i]]>1)
            {
                dup = nums[i];
                break;
            }
        }
        return dup;
    }
};