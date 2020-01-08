//
// Created by Max on 2020-01-04.
//

using namespace std;

#include <iostream>

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


    void reorderList(ListNode* head) {

        if(!head){
            return;

        }

        ListNode* head1=head;
        ListNode* chaser=head;
        ListNode* runner=head;

        while (runner&&runner->next){
            chaser=chaser->next;
            runner=runner->next->next;

        }


        runner=chaser;

        ListNode* next=runner->next;

        while(next&&runner){

            ListNode* temp=next->next;
            next->next=runner;

            runner=next;
            next=temp;

        }

        ListNode* r=runner;
        ListNode* l=head1;

        bool flag=true;

        while (l!=r){
            if(flag){
                ListNode* temp=l->next;
                l->next=r;
                l=temp;
                flag= false;

            }else{
                ListNode* temp=r->next;
                r->next=l;
                r=temp;
                flag=true;

            }



        }
        r->next=NULL;



        head=head1;
    }







