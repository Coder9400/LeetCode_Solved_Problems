// class Solution {
// public:
//     vector<int> s1, s2;
//     void inorder1(TreeNode* t) {
//         if (t != nullptr) {
//             inorder1(t->left);
//             s1.push_back(t->val);
//             inorder1(t->right);
//         }
//     }
//     void inorder2(TreeNode* t) {
//         if (t != nullptr) {
//             inorder2(t->left);
//             s2.push_back(t->val);
//             inorder2(t->right);
//         }
//     }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
//             return false;
//         if (p == nullptr && q == nullptr)
//             return true;
//         inorder1(p), inorder2(q);
//         vector<int>::iterator it, pf;
//         sort(s1.begin(),s1.end());
//         sort(s2.begin(),s2.end());
//         for (it = s1.begin(), pf = s2.begin(); it != s1.end() && pf != s2.end();
//              it++, pf++) {
//             if (*it != *pf)
//                 return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    vector<int> s1, s2;
    
    void preorder1(TreeNode* t) {
        if (t == nullptr) {
            s1.push_back(INT_MIN); // marker for null
            return;
        }
        s1.push_back(t->val);
        preorder1(t->left);
        preorder1(t->right);
    }

    void preorder2(TreeNode* t) {
        if (t == nullptr) {
            s2.push_back(INT_MIN);
            return;
        }
        s2.push_back(t->val);
        preorder2(t->left);
        preorder2(t->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        preorder1(p);
        preorder2(q);

        if (s1.size() != s2.size()) return false;
        for (size_t i = 0; i < s1.size(); ++i) {
            if (s1[i] != s2[i])
                return false;
        }
        return true;
    }
};