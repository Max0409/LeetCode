//
// Created by Max on 2019-12-16.
//

#include <vector>
using namespace std;



  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

vector<vector<int>> res;

  void  help(TreeNode* root, int sum, vector<int> re){
      if(root->left==nullptr&&root->right==nullptr){
          if(sum==root->val){
              re.push_back(root->val);
              res.push_back(re);


          }
          return;
      }




      int val=root->val;

      re.push_back(root->val);

      if(root->left){
          help(root->left,sum-val,re);
      }
      if(root->right){
          help(root->right,sum-val,re);
      }


  }

vector<vector<int>> pathSum(TreeNode* root, int sum) {
      if(!root){
          return res;

      }
      vector<int> re;

      help(root,sum,re);
    return res;





}