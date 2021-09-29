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
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        return max(height(root->right),height(root->left))+1;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d= height(root);
        vector<vector<int>> res(d,vector<int>{});
        if(!root)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>ans;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                ans.push_back(temp->val);
            }
            res[d-1]=ans;
            d--;
        }
        return res;
    }
};