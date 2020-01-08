//
// Created by Max on 2019-12-30.
//

using namespace std;

#include <iostream>
#include "queue"


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
};


Node* connect(Node* root) {
    if(!root){
        return root;

    }

    Node* r=root;



    queue<Node*> nodes;

    int size=1;
    int n_size=0;
    nodes.push(root);

    while(!nodes.empty()){
        Node* node=nodes.front();
        nodes.pop();
        size--;

        if(size!=0){
            node->next=nodes.front();

        }

        if(node->left){
            nodes.push(node->left);
            n_size++;


        }

        if(node->right){
            nodes.push(node->right);
            n_size++;


        }
        if(size==0){
            size=n_size;
            n_size=0;

        }
    }

    return r;

}



