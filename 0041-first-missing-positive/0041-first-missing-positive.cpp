class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for (auto it : nums) {
            st.insert(it);
        }
        for (int i = 1; i <= 1000000; i++) {
            if (st.count(i) == 0)
                return i;
        }
        return 0;
    }
};