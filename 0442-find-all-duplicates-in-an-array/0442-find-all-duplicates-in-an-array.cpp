class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        int hash[n+1];
        sort(nums.begin(),nums.end());
        vector<int> numss;
        if(n>1)
        {
        for(int i=0;i<=n;i++)
        {
            hash[i] = 0;
        }
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
                if(hash[i]>1) numss.push_back(i);
        }
        }
        return numss;
    }
};