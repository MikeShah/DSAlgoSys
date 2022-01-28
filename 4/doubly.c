// Goal: Write a doubly linked list

#include <stdio.h>  // Standard I/O functions like printf
#include <stdlib.h> // malloc and free

typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node_t;

typedef struct DoublyLinkedList{
    node_t* head;
    node_t* tail;

    int count; // Number of nodes
}dll_t;


dll_t* CreateDoublyLinkedList(){
   dll_t* newList = (dll_t*)malloc(sizeof(dll_t));
   newList->head = NULL;
   newList->tail = NULL;
   newList->count =0;

   return newList;
}

// Add to the front of the list
void prependDLLNode(dll_t* list, int data){
    // 1. Create a new node
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = data;
    newNode->next = list->head;
    newNode->prev = NULL;
    // 2. Move the old head prev node, to point to this node
    list->head = newNode; // O(1)
}

// Entry point into the program
int main(){

    dll_t* myDLL = CreateDoublyLinkedList();

    prependDLLNode(myDLL,487);

    free(myDLL);

    printf("Ending program\n");
    return 0;
}
