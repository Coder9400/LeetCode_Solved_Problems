class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a, b;
        while (l1 != nullptr) {
            a.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            b.push_back(l2->val);
            l2 = l2->next;
        }
        vector<int> s;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0, sum = 0;
        while (i >= 0 && j >= 0) {
            sum = a[i] + b[j] + carry;
            s.push_back(sum % 10);
            carry = sum / 10;
            i--;
            j--;
        }
        while (i >= 0) {
            sum = a[i] + carry;
            s.push_back(sum % 10);
            carry = sum / 10;
            i--;
        }
        while (j >= 0) {
            sum = b[j] + carry;
            s.push_back(sum % 10);
            carry = sum / 10;
            j--;
        }
        if (carry)
            s.push_back(carry);
        l2 = nullptr;
        l2 = new ListNode(0);
        l1 = l2;
        i = s.size() - 1;
        while (i >= 0) {
            l2->next = new ListNode();
            l2 = l2->next;
            l2->val = s[i];
            i--;
        }
        return l1->next;
    }
};