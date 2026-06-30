class Solution {
public:
    void rev(int nums[], int i, int n, int k) {
        int p = i;
        int g = i + k - 1;
        while (p < g) {
            int gh = nums[g];
            nums[g] = nums[p];
            nums[p] = gh;
            p++;
            g--;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int nums[50000];
        int a = 0;
        ListNode* temp;
        temp = head;
        while (temp != nullptr) {
            nums[a] = temp->val;
            a++;
            temp = temp->next;
        }
        int i = 0;
        while (a - i >= k) {
            rev(nums, i, a, k);
            i = i + k;
        }
        head = nullptr;
        head = new ListNode(0);
        temp = head;
        for (int j = 0; j < a; j++) {
            head->next = new ListNode();
            head = head->next;
            head->val = nums[j];
        }
        head->next = nullptr;
        return temp->next;
    }
};