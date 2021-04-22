// gcc stringmatch.c -o stringmatch
#include <stdio.h>
#include <string.h>

// T - Our Text
// p - The pattern we want to search
// Returns the index(0 or greater) of the matched string position.
// Returns a negative value if there are no occurrences found
int bruteForceStringMatch(char* T, char* p){
    unsigned int i, j;

    unsigned int n = strlen(T);
    unsigned int m = strlen(p);
    // If we are searching for a string longer than our text
    // return false.
    if(m > n){
        return -2; // '-2'tells us pattern 'p' was greater than the text.
    }    
    // Otherwise do a character by character search
    for(i=0; i < n-m+1; i++){
        j=0;// Start at the start of our pattern each iteration
        while(j<m && p[j]==T[i+j]){
            j++;
            if(j==m){
                return i; // Return index of match
            }
        }
    }
    // If we reach this point, then we never got a full match, return -1.
    return -1;
}

int main(){
    
    char* text = "hello from mike";
    char* test1 = "hello";
    char* test2 = "from";
    char* test3 = "mike";
    char* test4 = "abcdedfg"; 
    char* test5 = "abcdedfghijklmnopqrstuvwxyz"; 

    printf("%s? %d\n",test1,bruteForceStringMatch(text,test1));
    printf("%s? %d\n",test2,bruteForceStringMatch(text,test2));
    printf("%s? %d\n",test3,bruteForceStringMatch(text,test3));
    printf("%s? %d\n",test4,bruteForceStringMatch(text,test4));
    printf("%s? %d\n",test5,bruteForceStringMatch(text,test5));
    

    return 0;
}
