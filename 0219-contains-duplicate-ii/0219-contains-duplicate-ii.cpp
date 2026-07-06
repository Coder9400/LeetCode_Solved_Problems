class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]].push_back(i);
        }
        for (auto it : hash) {
            if (it.second.size() > 1) {
                vector<int> vec = it.second;
                for (int i = 1; i < vec.size(); i++) {
                    int diff = abs(vec[i - 1] - vec[i]);
                    if (diff <= k)
                        return true;
                }
            }
        }
        return false;
    }
};