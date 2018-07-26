#include<iostream>
using namespace std;

// list node structure
typedef struct list_node {
   int data;
   struct list_node *next;
}node;

// create new node
node *getNewNode(int data) {
   node *new_node = new node;
   new_node->data = data;
   new_node->next = NULL;
   return new_node;
}


// append a node to the list
void addNodeToList(node **head, int data) {
   if (*head == NULL)
      *head = getNewNode(data);
   else {
      node *ptr = *head;
      while (ptr->next != NULL)
         ptr = ptr->next;
      ptr->next = getNewNode(data);
   }
}

// create a list
node *createList1() {
   node *head = NULL;
   addNodeToList(&head,3);
   addNodeToList(&head,7);
   addNodeToList(&head,11);
   addNodeToList(&head,19);
   addNodeToList(&head,99);
   return head;
}

// create 2nd list
node *createList2() {
   node *head = NULL;
   addNodeToList(&head,1);
   addNodeToList(&head,2);
   addNodeToList(&head,16);
   addNodeToList(&head,37);
   addNodeToList(&head,59);
   return head;
}

// traverse the list
void traverseList(node *head) {
   node *ptr = head;
   while (ptr != NULL) {
      cout<<ptr->data<<" ";
      ptr = ptr->next;
   }
}

// merge the two sorted list
node *mergeList(node *h1,node *h2) {
   if (h2 == NULL) return h1;
   if (h1 == NULL) return h2;
   if(h1->data <= h2->data) {
      h1->next = mergeList(h1->next,h2);
      return h1;
   }
   else {
      h2->next = mergeList(h1,h2->next);
      return h2;
   }
}

// main
main() {
   node *head1 = NULL,*head2 = NULL;
   head1 = createList1();
   head2 = createList2();
   cout<<"\nList 1 :: ";
   traverseList(head1);
   cout<<"\nList 2 :: ";
   traverseList(head2);
   head1 = mergeList(head1,head2);
   cout<<"\nAfter Merging :: ";
   traverseList(head1);
   cout<<endl;
}
