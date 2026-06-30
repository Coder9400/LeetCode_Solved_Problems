class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> sett;
        for (int i : nums) {
            sett.insert(i);
        }
        vector<int> vec;
        ListNode *root, *temp;
        temp = head;
        while (temp != nullptr) {
            if (sett.find(temp->val) == 0) {
                vec.push_back(temp->val);
            }
            temp = temp->next;
        }
        // sort(vec.rbegin(),vec.rend());
        root = new ListNode(0);
        temp = root;
        for (auto it : vec) {
            root->next = new ListNode;
            root = root->next;
            root->val = it;
        }
        root->next = nullptr;
        return temp->next;
    }
};