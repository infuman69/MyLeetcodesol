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
private:vector<int> v;
public:
    void inOrder(TreeNode* root,int &pos,int &ans,int &k){
        if(root){
            inOrder(root->left,pos,ans,k);
            pos++;
            if(pos == k)
            {
                ans = root->val;
                return ;
            }
            inOrder(root->right,pos,ans,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int pos = 0,ans = INT_MAX;
        inOrder(root,pos,ans,k);
        return ans;
    }
};