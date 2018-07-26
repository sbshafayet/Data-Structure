#include<iostream>
using namespace std;

/* defines the structure of a single linked list node*/
typedef struct list_node {
   int data;
   struct list_node *next; // pointer to next node in the list 
}node;

/* create new node */
node *getNewNode(int data) {
   node *new_node = new node;
   new_node->data = data;
   new_node->next = NULL;
   return new_node;
}

/* displays the list elements */
void displayList(node *head) {
   cout << "Displaying List : ";
   while (head != NULL) {
      cout << head->data << " -> ";
      head = head->next;
   }
   cout << "NULL " << endl;
}

/* Search the node with element as data
   Return the pointer to the node if found else return NULL */
node *searchNode(node *head, int data) {
   node *ptr = NULL;
   while (head) {
      if (head->data == data) {
         ptr = head;
         break;
      }
      head = head->next;
   }
   return ptr;
}

/* insert a node at the beginning of the list */
node *insertNodeBeg(node *head, int data) {
   node *ptr = getNewNode(data);
   if (head == NULL) { // if list is empty
      head = ptr;
   }
   else {
      ptr->next = head;
      head = ptr;
   }
   return head;
}

/* insert a node at the end of the list */
node *insertNodeEnd(node *head, int data) {
   node *ptr = getNewNode(data);
   if (head == NULL) { //if list is empty
      head = ptr;
   }
   else {
      node *temp = head;
      while (temp->next != NULL) { // move to the last node
         temp = temp->next;
      }
      temp->next = ptr; // insert node at the end
   }
   return head;
}

/* insert a node at the after a particular node in the list */
node *insertNodeAfter(node *head, int element, int data) {
   // search the element after which node is to be inserted
   node *temp = searchNode(head, element);
   if (temp == NULL) { // element not found
      cout << "Element not found ... " << endl;
   }
   else {
      node *ptr = getNewNode(data);
      if (temp->next == NULL) { // node has to inserted after the last node
         temp->next = ptr;
      }
      else {  // insert the node after the first or an intermediate node
         ptr->next = temp->next;
         temp->next = ptr;
      }
   }
   return head;
}

/* delete a particular node from the list */
node *deleteNode(node *head, int element) {
   node *temp = searchNode(head, element); // search the node to be deleted
   if (temp == NULL) { // element not found
      cout << "Node to be deleted not found ... " << endl;
   }
   else {
      if (temp == head) { // first node is to be deleted
         head = head->next;
         delete temp;
      }
      else { // node to deleted is an intermediate or last node
         node *ptr = head;
         while (ptr->next != temp) {
            ptr = ptr->next;
         }
         ptr->next = temp->next;
         delete temp;
      }
   }
   return head;
}

int main() {
   node *head = NULL;
   head = insertNodeBeg(head, 7);       // 7
   head = insertNodeBeg(head, 9);       // 9 -> 7
   head = insertNodeEnd(head, 11);      // 9 -> 7 -> 11
   head = insertNodeAfter(head, 9, 4);  // 9 -> 4 -> 7 -> 11
   head = insertNodeAfter(head, 7, 3);  // 9 -> 4 -> 7 -> 3 -> 11
   head = insertNodeAfter(head, 11, 6); // 9 -> 4 -> 7 -> 3 -> 11 -> 6
   displayList(head);
   head = deleteNode(head, 7);          // 9 -> 4 -> 3 -> 11 -> 6
   head = deleteNode(head, 6);          // 9 -> 4 -> 3 -> 11
   head = deleteNode(head, 9);          // 4 -> 3 -> 11
   displayList(head);
   return 0;
}
