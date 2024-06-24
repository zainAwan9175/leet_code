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
 vector<int> arr;
  int inorder(TreeNode* rot)
        {
           
            if(rot==NULL)
            {
                return 0;
            }
             inorder(rot->left);
             arr.push_back(rot->val);
             inorder(rot->right);
    return 0;
          
        }
    vector<int> inorderTraversal(TreeNode* root) {
        
      
        inorder(root);
       
        return arr;
        
    }
};