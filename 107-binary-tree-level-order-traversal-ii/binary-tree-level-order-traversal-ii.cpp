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
        queue<TreeNode* > q;
        if(root==NULL)
        {
            return main;
        }
        q.push(root);
        while(!q.empty())
        {
            vector<int> iner;
            int siz=q.size();
            for(int i=0;i<siz;i++)
        {
            TreeNode* f=q.front();
                iner.push_back(f->val);
            if(f->left!=NULL)
            {
                q.push(f->left);
            }
             if(f->right!=NULL)
            {
                q.push(f->right);
            }
            q.pop();
        
        }
        main.push_back(iner);
        }
        reverse(main.begin(),main.end());

        return main;
    }
};