/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }

    bool isValid(TreeNode* node, long min, long max) {
        if (!node) return true;
        if (node->val <= min || node->val >= max) return false;
        return isValid(node->left, min, node->val) && isValid(node->right, node->val, max);
    }
};
// class Solution {
// private:
//     long long prevValue = LLONG_MIN; // Tracks the value of the last node we saw

// public:
//     bool isValidBST(TreeNode* root) {
//         if (!root) return true;
        
//         // 1. Check the left subtree
//         if (!isValidBST(root->left)) return false;
        
//         // 2. Check the current root node
//         if (root->val <= prevValue) return false;
//         prevValue = root->val; // Update the previous value to the current one
        
//         // 3. Check the right subtree
//         return isValidBST(root->right);
//     }
// };