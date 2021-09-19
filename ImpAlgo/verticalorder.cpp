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
    unordered_map<int, unordered_map<int, multiset<int>>> m;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>res;
        horizontal(root,0,0);
        for (int x = -999; x < 1000; ++x) {
        auto it = m.find(x);
         if (it != end(m)) {
           res.push_back(vector<int>());
           for (int y = 0; y < 1000; ++y) {
            auto itlevel = it->second.find(y);
            if (itlevel != end(it->second)) {
          res.back().insert(end(res.back()), begin(itlevel->second), end(itlevel->second));
        }
      }
    }
  }
  return res;
        
    }
    void horizontal(TreeNode* root,int hlevel,int level)
    {
        if(!root)
            return;
        m[hlevel][level].insert(root->val);
        horizontal(root->left,hlevel-1,level+1);
        horizontal(root->right,hlevel+1,level+1);
    }
};