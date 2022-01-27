// Compile with: gcc node2.c -o prog
// Run with    : ./prog
#include <stdio.h>      // for printf
#include <stdlib.h>     // for malloc/free and NULL

// Create 'struct node'
// NOTE: The 'typedef' at the front, and 'node_t' at
//       the end, allows us to create new structs by
//       just typing 'node_t' instead of 'struct node'
typedef struct node {
    int data;
    struct node* next;
}node_t;

int main(){
    // Create one node on the heap
    node_t* firstNode = (node_t*)malloc(sizeof(node_t));
    firstNode->data = 5;
    // Create a second node on the heap
    node_t* secondNode = (node_t*)malloc(sizeof(node_t));
    secondNode->data = 6;

    // Connect our nodes
    firstNode->next = secondNode;
    secondNode->next = NULL; // Our second node is the 'tail'
                             // thus, it points to NULL to 
                             // indicate the end.
    // Free our node(s)
    free(firstNode);
    free(secondNode);
    
    return 0;
}
