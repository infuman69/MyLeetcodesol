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
private: vector<int> v;
    
public:
    void Inorder(TreeNode *root){
        if(root){
            Inorder(root->left);
            v.push_back(root->val);
            Inorder(root->right);
        }
    }
    void bstmake(TreeNode* root,vector<int>& v,int& i){
        if(root){
            bstmake(root->left,v,i);
            if(root->val!=v[i]){
                root->val = v[i];
            }
            i++;
            bstmake(root->right,v,i);
        }
    }
    void recoverTree(TreeNode* root) {
        Inorder(root);
        sort(v.begin(),v.end());
        int i = 0;
        bstmake(root,v,i);
        return;
    
    }
};