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
    int longestUnivaluePath(TreeNode* root) {
        if(!root)
            return 0;
        int maxLen=0;
        longPath(root,maxLen);
        return maxLen;
    }
    
    int longPath(TreeNode*root, int& maxLen)
    {
        int l=root->left?longPath(root->left,maxLen):0;
        int r=root->right?longPath(root->right,maxLen):0;
        l=root->left && root->left->val==root->val?l+1:0;
        r=root->right && root->right->val==root->val?r+1:0;
        maxLen=max(maxLen,l+r);
        return max(l,r);
    }
};