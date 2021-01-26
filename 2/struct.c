// struct.c
#include <stdio.h>

// Our first custom data structure
typedef struct Student{
    int age;
    int id;
}student_t;

int main(){

    student_t cs5008Class[100];
    
    cs5008Class[0].age = 97;
    cs5008Class[0].id = 1010;
    
    cs5008Class[1].age = 17;
    cs5008Class[1].id = 1011;

    // ...
    return 0;
}


