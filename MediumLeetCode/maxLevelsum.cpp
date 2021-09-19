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
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int maxSum=INT_MIN;
        int level=0;
        int res=0;
        while(!q.empty())
        {
            int size=q.size();
            int sum=0;
            level+=1;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                sum+=temp->val;
                q.pop();
            }
            if(maxSum<sum)
            { res=level;
             maxSum=sum;
            }
        }
        return res;
    }
};