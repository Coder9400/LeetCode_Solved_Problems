class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> vec;
        ListNode *temp, *root;
        temp = head;
        int a = INT_MAX;
        while (temp != nullptr) {
            if (temp->next != nullptr && temp->next->val == temp->val) {
                a = temp->val;
                temp = temp->next;
                continue;
            } else if (a == temp->val) {
                temp = temp->next;
                continue;
            }
            vec.push_back(temp->val);
            temp = temp->next;
        }
        root = new ListNode(0);
        temp = root;
        sort(vec.begin(), vec.end());
        for (auto it : vec) {
            root->next = new ListNode;
            root = root->next;
            root->val = it;
        }
        return temp->next;
    }
};