#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 5;
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));

    ptr[0] = 3;
    ptr[1] = 7;

    printf("%d", ptr[0]);

    ptr = (int*) realloc(ptr, 10*sizeof(int));
    free(ptr);
     
    return 0;
}