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
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        if(root){ 
            if(root->left)
                ans = ans || hasPathSum(root->left,targetSum - root->val);
            if(root->right)
                ans = ans || hasPathSum(root->right,targetSum - root->val);
            if(root->val == targetSum && !root->left && !root->right)
                return true;
        }
        return ans;
    }
};