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
    vector<int> res;
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return res;
       int maxLevel=INT_MIN;
        rightNode(root, 0,maxLevel);
        return res;
    }
    void rightNode(TreeNode* root, int level, int &maxLevel)
    {
        if(!root) return;
        if(maxLevel<level)
        {
            res.push_back(root->val);
            maxLevel=level;
        }
        rightNode(root->right,level+1,maxLevel);
        rightNode(root->left,level+1,maxLevel);
    }
};