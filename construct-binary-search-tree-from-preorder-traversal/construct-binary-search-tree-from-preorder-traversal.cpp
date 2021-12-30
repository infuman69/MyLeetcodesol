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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size())
        {
        int i,location;
        TreeNode *root = new TreeNode(preorder[0]);
        if(preorder.size() == 1)
            return root;
        
            
        
        vector<int> leftsubtree,rightsubtree;
        for(i = 1;i < preorder.size();i++)
        {
            if(preorder[i]>preorder[0])
            {
                location = i;
                break;
            }
        }
        for(i = 1;i <= location - 1;i++)
        {
            leftsubtree.push_back(preorder[i]);
        }
        for(i = location;i <= preorder.size()-1 ; i++)
        {
            rightsubtree.push_back(preorder[i]);
        }
        
        root->left = bstFromPreorder(leftsubtree);
        root->right = bstFromPreorder(rightsubtree);
        
        return root;
        }
        return NULL;
        
    }
};