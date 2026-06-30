class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        ListNode *root, *temp;
        for (int i = 0; i < lists.size(); i++) {
            root = lists[i];
            while (root != nullptr) {
                vec.push_back(root->val);
                root = root->next;
            }
        }
        sort(vec.begin(), vec.end());
        temp = new ListNode(0);
        root = temp;
        for (auto it : vec) {
            temp->next = new ListNode;
            temp = temp->next;
            temp->val = it;
        }
        return root->next;
    }
};