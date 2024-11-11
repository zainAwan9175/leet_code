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
map<int,int> mp;
void inorder(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    mp[root->val]++;
    inorder(root->right);


}
    vector<int> findMode(TreeNode* root) {
        inorder(root);
            int maxi=0;
    for(auto it:mp)
    {
      if(it.second>maxi)
      {
        maxi=it.second;
      }
    }

    vector<int> vec;
       for(auto it:mp)
    {
      if(it.second==maxi)
      {
        vec.push_back(it.first);
      }
    }
    return vec;
        
    }


};