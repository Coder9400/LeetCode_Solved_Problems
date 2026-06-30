/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void merge_sort(int arr[], int beg, int mid, int end) {
        vector<int> vec;
        int start = beg;
        int finish = mid + 1;

        while (start <= mid && finish <= end) {
            if (arr[start] <= arr[finish]) {
                vec.push_back(arr[start]);
                start++;
            } else {
                vec.push_back(arr[finish]);
                finish++;
            }
        }

        while (start <= mid) {
            vec.push_back(arr[start]);
            start++;
        }

        while (finish <= end) {
            vec.push_back(arr[finish]);
            finish++;
        }

        vector<int>::iterator it;
        it = vec.begin();
        for (int i = beg; i <= end; i++) {
            if (it == vec.end())
                break;
            else {
                arr[i] = *it;
                it++;
            }
        }
    }
    void merge(int arr[], int beg, int end) {
        if (beg < end) {
            int mid = (beg + end) / 2;
            merge(arr, beg, mid);
            merge(arr, mid + 1, end);
            merge_sort(arr, beg, mid, end);
        }
    }
    ListNode* sortList(ListNode* head) {
        if (head == nullptr)
            return head;
        int arr[1000001];
        int a = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr[a] = temp->val;
            a++;
            temp = temp->next;
        }
        merge(arr, 0, a - 1);

        ListNode* t;
        t = new ListNode;
        t->val = 0;
        temp = t;
        int n = a;
        a = 0;
        while (a < n) {
            t->next = new ListNode;
            t->next->val = arr[a];
            t = t->next;
            a++;
        }
        t->next = nullptr;
        return temp->next;
    }
};