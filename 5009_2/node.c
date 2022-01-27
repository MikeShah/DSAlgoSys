// Compile with: gcc node.c -o prog
// Run with    : ./prog
#include <stdio.h> // for printf
#include <stdlib.h> // for malloc/free and NULL

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
    // See how much memory it takes
    printf("Size of a node_t in bytes = %lu\n",sizeof(node_t)); 
    // Free our node
    free(firstNode);

    return 0;
}
