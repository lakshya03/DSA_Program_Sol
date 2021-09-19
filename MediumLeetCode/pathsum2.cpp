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
    vector<vector<int>>res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        findpathSum(root,targetSum,0,ans);
        return res;
    }
   void findpathSum(TreeNode* root, int targetSum,int curr,vector<int> &ans )
    {
       if(!root)
           return;
       curr+=root->val;
       ans.push_back(root->val);
        if(!root->left && !root->right && curr==targetSum)
            res.push_back(ans);
       findpathSum(root->left,targetSum,curr,ans);
       findpathSum(root->right,targetSum,curr,ans);
       ans.pop_back();
    }
};