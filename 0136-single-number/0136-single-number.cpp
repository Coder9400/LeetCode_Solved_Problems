class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int sum = 0;
       for(int val : nums)
       {
            sum = sum ^ val;
       }
       return sum; 
    }
};