//
// Created by Max on 2019-11-06.
//
using namespace std;

#include <unordered_map>
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};

Node* copyRandomList(Node* head){
    if(head== nullptr){
        return head;
    }
    unordered_map<Node*,Node*> nodes;
    Node* pre;
    Node* pre1=pre;
    Node* head1=head;

    while (head){
        Node* node=new Node();
        node->val=head->val;
        nodes[head]=node;

        head=head->next;

    }

    head=head1;

while(head){
    nodes[head]->next=nodes[head->next];
    nodes[head]->random=nodes[head->random];
    head=head->next;



}


    return nodes[head1];





}