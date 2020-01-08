//
// Created by Max on 2019-12-18.
//


// * Definition for singly-linked list.
#include "iostream"

using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}


  };


ListNode* reverseBetween(ListNode* head, int m, int n) {


    ListNode* preHead=new ListNode(0);
    preHead->next=head;


    int i=0;


    for (i;i<m-2;i++){
        head=head->next;
    }

    ListNode* presNode=head;


    head=head->next;
    ListNode* sNode=head;
    ListNode* next=head->next;
    ListNode* next_next;



    for(i;i<n-1;i++){
        next_next=next->next;

        next->next=head;
        head=next;
        next=next_next;

    }

    sNode->next=next_next;
    presNode->next=next;
    return preHead->next;




}


//int main(){
//    ListNode n1(1);
//    ListNode n2(2);
//    ListNode n3(3);
//    ListNode n4(4);
//    ListNode n5(5);
//
//    n1.next=&n2;
//    n2.next=&n3;
//    n3.next=&n4;
//    n4.next=&n5;
//
//    reverseBetween(&n1,2,4);
//
//
//}


