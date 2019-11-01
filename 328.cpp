//
// Created by Max on 2019-11-01.
//

using namespace std;

#include "string"
#include "iostream"
#include "vector"
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


ListNode* oddEvenList(ListNode* head) {
    if(head==NULL){
        return head;
    }

    ListNode* preHead=new ListNode(0);
    preHead->next=head;
    ListNode* l1=head;
    ListNode* l2=head->next;
    ListNode* l2_back=l2;
    ListNode* prel1;

    while(l1&&l2){

        l1->next=l2->next;

        prel1=l1;
        l1=l1->next;
        if(l1){
            l2->next=l1->next;
            l2=l2->next;
        }



    }
    if(l1){
        l1->next=NULL;
    }
    if(l2){
        l2->next=NULL;
    }

    if(l1){
        l1->next=l2_back;
    } else{
        prel1->next=l2_back;

    }

    return preHead->next;

}