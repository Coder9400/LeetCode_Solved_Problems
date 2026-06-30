class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> boo;
        int a = 0;
        for (int i = 0; i < nums.size(); i++) {
            a = a * 2 + nums[i];
            a = a % 5;
            if (a % 5 == 0)
                boo.push_back(1);
            else
                boo.push_back(0);
        }
        return boo;
    }
};