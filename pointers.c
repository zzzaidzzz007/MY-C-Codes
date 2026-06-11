#include<stdio.h>

int main(){
    int x = 45;
    int* y = &x;

    printf("%p\n", y);
    printf("%d\n", *y);
    return 0;
}