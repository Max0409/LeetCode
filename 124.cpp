//
// Created by Max on 2019-11-26.
//
using namespace std;

#include <iostream>

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

  int maxPathSum(TreeNode* root,int& val ){
      if(root==NULL){ return 0;}
      int l_max=maxPathSum(root->left,val);
      int r_max=maxPathSum(root->right,val);
      int lmr=root->val+max(0,l_max)+max(0,r_max);
      int ret=root->val+max(0,max(l_max,r_max));
      val=max(val,max(lmr,ret));
      return ret;



  }
int maxPathSum(TreeNode* root) {


      int val=INT32_MIN;
      maxPathSum(root,val);
      return val;


}