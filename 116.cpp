//
// Created by Max on 2019-11-11.
//
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class Solution {
public:
    Node* connect(Node* root) {

        if(root==NULL){
            return root;

        }

        Node* root1=root;


        queue<Node*> nodes;
        nodes.push(root);
        int count=1;
        int nextLevelCount=0;


        while(!nodes.empty()){
            Node* temp=nodes.front();
            nodes.pop();

            count--;
            if(count==0){
                temp->next=NULL;

            } else{
                temp->next=nodes.front();

            }
            if(temp->left){
                nodes.push(temp->left);
                nextLevelCount++;
                nodes.push(temp->right);
                nextLevelCount++;


            }
            if(count==0){
                count=nextLevelCount;
                nextLevelCount=0;

            }
        }

        return root1;


    }
};
