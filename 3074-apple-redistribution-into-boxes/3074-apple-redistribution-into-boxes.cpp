class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0;
        for (auto it : apple) {
            count = count + it;
        }
        int min_boxes = 0;
        multiset<int> boxes;
        for (auto it : capacity) {
            boxes.insert(it);
        }
        while (count > 0) {
            int max = INT_MIN;
            multiset<int>::iterator it, ptr;
            it = boxes.begin();
            ptr = it;
            while (it != boxes.end()) {
                if (max <= *it) {
                    max = *it;
                    ptr = it;
                }
                it++;
            }
            count -= max;
            min_boxes++;
            boxes.erase(ptr);
        }
        return min_boxes;
    }
};