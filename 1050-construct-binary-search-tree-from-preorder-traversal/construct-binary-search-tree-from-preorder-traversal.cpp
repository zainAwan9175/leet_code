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

//  class TreeNode{
// 	public:
// 		int data;
// 		node* left;
// 		node* right;
// 		TreeNode (int d){
// 			data=d;
// 			left=NULL;
// 			right=NULL;
			
// 		}
// };

TreeNode* insert(TreeNode* root,int data)
{
	if(root==NULL)
	{
		TreeNode* newnode=new TreeNode(data);
		root=newnode;
	}
	else if(data<root->val)
	{
		root->left=insert(root->left,data);
	}
	else if(data>root->val)
	{
		root->right=insert(root->right,data);
	}
	return root;
}



class Solution {
public:


    TreeNode* bstFromPreorder(vector<int>& preorder) {
        	TreeNode* root=NULL;
        for(auto it:preorder)
        {
            root=insert(root,it);
        }

   return root;


        
    }
};