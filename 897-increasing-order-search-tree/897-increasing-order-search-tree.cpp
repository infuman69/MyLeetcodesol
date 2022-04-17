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
private:
    vector<int> Inoarr;
public:
    void inorder(TreeNode *root)
    {
        if(root){
            inorder(root->left);
            Inoarr.push_back(root->val);
            inorder(root->right);
        }
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* newTree = new TreeNode();
        inorder(root);
        TreeNode* move;
        move = newTree;
        for(auto x:Inoarr){
            move->right = new TreeNode(x);
            move = move->right;
        }
        return newTree->right;
    }
};