class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr)
            return head;
        vector<int> vec;
        ListNode* temp;
        int n = 0;
        temp = head;
        while (temp != nullptr) {
            vec.push_back(temp->val);
            n++;
            temp = temp->next;
        }
        ListNode* root;
        root = new ListNode(0);
        temp = root;
        for (int i = 0; i < n; i++) {
            if (i >= (n / 2)) {
                root->next = new ListNode(vec[i]);
                root = root->next;
            }
        }
        return temp->next;
    }
};