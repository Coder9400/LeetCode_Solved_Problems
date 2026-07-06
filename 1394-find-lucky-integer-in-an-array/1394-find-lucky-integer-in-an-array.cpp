class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> hash;
        for (auto it : arr) {
            hash[it]++;
        }
        arr.clear();
        for (auto it : hash) {
            if (it.first == it.second)
                arr.push_back(it.first);
        }
        sort(arr.begin(), arr.end());
        if (arr.size() > 0) {
            return arr[arr.size() - 1];
        }
        return -1;
    }
};