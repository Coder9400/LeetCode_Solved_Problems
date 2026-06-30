class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        prefix.push_back(1);
        int sum = 1;
        for (int i = 1; i < nums.size(); i++) {
            sum = sum * nums[i - 1];
            prefix.push_back(sum);
        }
        reverse(nums.begin(), nums.end());
        sum = 1;
        suffix.push_back(1);
        for (int i = 1; i < nums.size(); i++) {
            sum = sum * nums[i - 1];
            suffix.push_back(sum);
        }
        reverse(suffix.begin(), suffix.end());
        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            answer.push_back(prefix[i] * suffix[i]);
        }
        return answer;
    }
};