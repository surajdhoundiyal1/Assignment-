#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* merge(Node* a,Node* b)

{

   Node *head=new Node(0),*tail=head;

   while(a && b)

   {

       if(a->data<b->data)

       {

           tail->child=a;

           tail=a;

           a=a->child;

       }

       else

       {

        tail->child=b;

           tail=b;

           b=b->child;

       }

   }

   

   if(a) tail->child=a;

   if(b) tail->child=b;

   

   return head->child;

}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
      if(head==NULL || head->next==NULL) return head;

   

   head->next=flattenLinkedList(head->next);

   

   head = merge(head,head->next);

   

   return head;
}
