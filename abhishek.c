
// A simple C program for traversal of a linked list 

#include <stdio.h> 

#include <stdlib.h> 

struct Node { 

    int data; 

    struct Node* next; 

}; 


// This function prints contents of linked list starting from 

// the given node 

void printList(struct Node* n) 

{ 

    while (n != NULL) { 

        printf(" %d ", n->data); 

        n = n->next; 

    } 

} 

int main() 

{ 

    struct Node* head = NULL; 

    struct Node* second = NULL; 

    struct Node* third = NULL; 


    // allocate 3 nodes in the heap 

    head = (struct Node*)malloc(sizeof(struct Node)); 

    second = (struct Node*)malloc(sizeof(struct Node)); 

    third = (struct Node*)malloc(sizeof(struct Node)); 

    head->data = 1; // assign data in first node 

    head->next = second; // Link first node with second 

    second->data = 2; // assign data to second node 
void push(struct Node** head_ref, int new_data) 
{ 
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   
    /* 2. put in the data  */
    new_node->data  = new_data; 
   
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref); 
   
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
    second->next = third; 

    third->data = 3; // assign data to third node 

    third->next = NULL; 

    printList(head); 
   return 0; 

}

