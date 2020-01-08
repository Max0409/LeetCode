//
// Created by Max on 2020-01-07.
//
#include <iostream>
#include <vector>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

vector<string> res;


 void  helper(TreeNode* root,string s){

     if(!root->left&&!root->right){
         string temp=s;
         if(temp!=""){
             temp+="->";
         }
         temp+=to_string(root->val);
         res.push_back(temp);
         return;
     }
     if(root->left){
         string temp=s;
         if(temp!=""){
             temp+="->";
         }
         temp+=to_string(root->val);
         helper(root->left,temp);

     }


     if(root->right){
         string temp=s;
         if(temp!=""){
             temp+="->";
         }
         temp+=to_string(root->val);
         helper(root->right,temp);

     }

 }


vector<string> binaryTreePaths(TreeNode* root) {
     if(!root){
         return res;

     }

     helper(root,"");
     return res;



}