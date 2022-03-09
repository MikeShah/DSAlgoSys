#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
void sortIntegers(int* array, size_t size){
    int i,j;
    for(i=0; i < size; ++i){
        for(j=0; j < size-1-i; j++){
            if(array[j] > array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

int main(){
    int array[] = {11,14,27,33, 72, 35,10, 4};
    sortIntegers(array,8);

    for(int i=0; i < 8; i++){
        printf("%d\n",array[i]);
    }

    return 0;
}
