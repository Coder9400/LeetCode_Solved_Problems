class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return false;
        map<ListNode*,int> hash;
        int i = 0;
        ListNode *root;
        root = head;
        while(root!=nullptr)
        {
            hash[root]++;
            if(hash[root]>1) return true;
            root = root->next;
            i++;
        }
        return false;
    }
};