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
vector<int> vec;
 void preorder(TreeNode* root)
 {
    if(root==NULL)
        {
            return ;
        }
     
        preorder(root->left);
         preorder(root->right);
            vec.push_back(root->val);

 }
    vector<int> postorderTraversal(TreeNode* root) {
        preorder(root);
        return vec;
        
    }
};