//
// Created by Max on 2019-12-24.
//
#include "vector"
using namespace std;

// * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };




  void help(TreeNode* root,int lev,vector<int >&res){
      if(root){ return;}
      if(res.size()>lev){

      } else{
          res.push_back(root->val);


      }
      if(root->right){
          help(root->right,lev+1,res);

      }

      if(root->left){
          help(root->left,lev+1,res);

      }
  }


vector<int> rightSideView(TreeNode* root) {

    vector<int >res={};
    help(root,0,res);
    return res;



}

