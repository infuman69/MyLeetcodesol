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
   TreeNode* maxbtree(vector<int>& nums,int l , int r)
    {
        if(r<l)
        {
           
            return NULL;
        }
        else if(l == r)
        {
            return new TreeNode(nums[l]);
            
        }
        else{
    
            int locationmax=l;
            for(int i = l + 1;i <= r;i++)
            {
                if(nums[locationmax]<nums[i])
                {
                    locationmax = i;
                }
            }
            TreeNode *root = new TreeNode(nums[locationmax]);
            root->left = maxbtree(nums,l,locationmax -1);
            root->right = maxbtree(nums,locationmax+1,r);
            return root;
        }
      
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty())
            return NULL;
        
        return maxbtree(nums,0,nums.size()-1);
    }
};