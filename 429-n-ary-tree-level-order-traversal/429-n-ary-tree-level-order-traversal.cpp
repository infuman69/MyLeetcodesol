/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return  {};
        
        queue<Node*> treetraverse;
        vector<vector<int>> level;
        treetraverse.push(root);
        while(!treetraverse.empty()){
            int sz = treetraverse.size();
            vector<int> v;
            while(sz--){
                Node* curr = treetraverse.front();
                treetraverse.pop();
                v.push_back(curr->val);
                for(auto it:curr->children)
                    treetraverse.push(it);
                
            }
            level.push_back(v);
        }
        
        return level;
    }
};