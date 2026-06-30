class Solution {
public:
    unordered_map<int, int> hash3;
    void check(vector<int>& nums, vector<int>& nums1,
               unordered_map<int, int>& hash, unordered_map<int, int>& hash1) {
        for (auto it : nums) {
            if (hash1[it] > 0) {
                int a = it;
                int b = min(hash[it], hash1[it]);
                hash3.insert({a, b});
            }
        }
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hash1, hash2;
        for (auto it : nums1) {
            hash1[it]++;
        }
        for (auto it : nums2) {
            hash2[it]++;
        }
        int n = nums1.size();
        int m = nums2.size();
        if (n <= m) {
            check(nums1, nums2, hash1, hash2);
        } else
            check(nums2, nums1, hash2, hash1);
        vector<int> vec;
        for (auto it : hash3) {
            n = it.second;
            for (int i = 0; i < n; i++) {
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};