class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (auto it : nums) {
            hash[it]++;
        }
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            int check1 = 0;
            int check2 = INT_MIN;
            for (auto it : hash) {
                if (it.second >= check2) {
                    check2 = it.second;
                    check1 = it.first;
                }
            }
            if (check2 != INT_MIN) {
                ans.push_back(check1);
                hash.erase(check1);
            }
        }
        return ans;
    }
};