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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     vector<vector<int>> main;
      queue<TreeNode*>Q;
      if(root==NULL)
      {
        return main;
      }
      Q.push(root);
      while(!Q.empty())
      {
int size=Q.size();
     vector<int> inner;
for(int i=0;i<size;i++)
{
    
        TreeNode* current=Q.front();
        inner.push_back(current->val);
   

        if(current->left!=NULL)
        {
                Q.push(current->left);
        }
         if(current->right!=NULL)
        {
                Q.push(current->right);
        }
        Q.pop();
}
main.push_back(inner);
       



      }
reverse(main.begin(),main.end());


return main;
       
    }
};