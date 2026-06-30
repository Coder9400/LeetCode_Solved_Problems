class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> even, odd;
        ListNode* temp;
        int a = 0;
        temp = head;
        while (temp != nullptr) {
            if (a % 2 == 0)
                even.push_back(temp->val);
            else
                odd.push_back(temp->val);
            temp = temp->next;
            a++;
        }
        temp = nullptr;
        temp = new ListNode(0);
        head = temp;
        for (int i : even) {
            temp->next = new ListNode;
            temp = temp->next;
            temp->val = i;
        }
        for (int i : odd) {
            temp->next = new ListNode;
            temp = temp->next;
            temp->val = i;
        }
        temp->next = nullptr;
        head = head->next;
        return head;
    }
};