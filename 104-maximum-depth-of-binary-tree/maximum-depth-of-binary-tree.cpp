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
  int find(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(find(root->left),find(root->right));
    }
class Solution {
   
public:
    int maxDepth(TreeNode* root) {
        return find(root);
        
    }
};