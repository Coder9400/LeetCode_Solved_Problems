class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> vec, vec1;
        ListNode* root;
        root = head;
        while (root != nullptr) {
            vec.push_back(root->val);
            root = root->next;
        }
        int n = vec.size();
        n--;
        for (int i = 0, j = n; i <= j; i++, j--) {
            if (i == j)
                vec1.push_back(vec[i]);
            else {
                vec1.push_back(vec[i]);
                vec1.push_back(vec[j]);
            }
        }
        root = head;
        int i = 0;
        while (root != nullptr) {
            root->val = vec1[i];
            i++;
            root = root->next;
        }
    }
};