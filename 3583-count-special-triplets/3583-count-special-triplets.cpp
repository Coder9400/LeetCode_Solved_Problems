class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long count = 0;
        long long p = 1e9 + 7;
        unordered_map<int, int> hash1, hash2;
        hash1[nums[0]]++;
        for (int i = 1; i < nums.size(); i++) {
            hash2[nums[i]]++;
        }
        for (int i = 1; i < nums.size() - 1; i++) {
            int a = nums[i] * 2;
            if (i > 1) {
                hash1[nums[i - 1]]++;
            }
            if (hash2[nums[i]] > 0)
                hash2[nums[i]]--;
            long long c1 = hash1[a], c2 = hash2[a];
            count = (count + (c1 * c2)) % p;
        }
        return (int)(count);
    }
};