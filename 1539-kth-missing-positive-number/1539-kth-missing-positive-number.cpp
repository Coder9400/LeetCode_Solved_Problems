class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> st;
        for (int i = 1; i <= 10000; i++) {
            st.insert(i);
        }
        for (auto it : arr) {
            if (st.count(it))
                st.erase(it);
        }
        set<int>::iterator it;
        it = st.begin();
        for (int i = 1; i < k; i++) {
            it++;
        }
        return *it;
    }
};