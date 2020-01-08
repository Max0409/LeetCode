//
// Created by Max on 2019-12-29.
//


// * Definition for a binary tree node.
using namespace std;

#include "iostream"
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

  int sum=0;

  void helper(TreeNode* root,int num){
      if(!root){ return;}
      if(root->left==NULL&&root->right==NULL){
          num=num*10+root->val;
          sum+=num;
          return;


      }
      if(root->left){
          helper(root->left,num*10+root->val);

      }
      if(root->right){
          helper(root->right,num*10+root->val);

      }
  }
int sumNumbers(TreeNode* root) {



      helper(root,0);
    return sum;


}
