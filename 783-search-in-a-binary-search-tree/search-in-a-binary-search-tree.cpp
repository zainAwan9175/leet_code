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

 TreeNode* search(TreeNode*root,int data)
{
	
	if(root==NULL)
	{
		return NULL;
	}
else if(data==root->val)
{
	return root;
	
}
	else if(data<root->val)
	{
		return search(root->left,data);
	}
	else if(data>root->val)
	{
		return search(root->right,data);
	}
    return NULL;
}

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        return search(root,val);
    }
};