#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("Enter n: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n* sizeof(int));
    
    ptr[0] = 8;
    ptr[1] = 5;

    printf("%d", ptr[1]);
    free(ptr);

    return 0;
}