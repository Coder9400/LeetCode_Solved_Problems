class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums1.clear();
            nums1 = nums2;
        } else {
            int arr[201];
            int h = 0;
            vector<int>::iterator it;
            it = nums1.begin();
            for (int i = 0; i < m; i++) {
                arr[i] = *it;
                it++;
                h++;
            }
            it = nums2.begin();
            for (int i = 0; i < n; i++) {
                arr[i + m] = *it;
                it++;
                h++;
            }
            nums1.clear();

            int j = sizeof(arr) / sizeof(arr[0]);
            for (int i = 0; i < h; i++) {
                nums1.push_back(arr[i]);
            }
            sort(nums1.begin(), nums1.end());
        }
    }
};