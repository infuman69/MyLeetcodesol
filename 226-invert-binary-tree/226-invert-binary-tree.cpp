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
    TreeNode* helper(TreeNode* root){
        if(!root)
            return NULL;
        TreeNode* uroot = new TreeNode();
        uroot->val = root->val;
        uroot->left = helper(root->right);
        uroot->right = helper(root->left);
        return uroot;
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *inverted = helper(root);
        
        return inverted;
    }
};