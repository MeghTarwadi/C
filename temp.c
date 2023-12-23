#include <stdio.h>
#include <stdlib.h>

struct n {
   int data;
   struct n *address;
};

struct n *head = NULL;

//display the list
void printList() {
   struct n *ptr = head;

   printf("\n[head] =>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->address;
   }

   printf(" [null]\n");
}

//insert link at the first location
void insert(int data) {
   //create a link
   struct n *link = (struct n*) malloc(sizeof(struct n));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->address = head;

   //point first to new first node
   head = link;
}

int main() {
   insert(10);
   insert(20);
   insert(30);
//    insert(1);
//    insert(40);
//    insert(56); 

   printList();
   return 0;
}
