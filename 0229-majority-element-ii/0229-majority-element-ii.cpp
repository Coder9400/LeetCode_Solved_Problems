class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> hash;
        vector<int> vec;
        for (auto it : nums) {
            hash[it]++;
        }
        for (auto it : hash) {
            if (it.second > (nums.size() / 3))
                vec.push_back(it.first);
        }
        return vec;
    }
};