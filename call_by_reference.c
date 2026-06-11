#include<stdio.h>

int sum(int* a, int* b){
    return *a + *b;
}
int main(){
    int a = 3,b = 5;
    printf("Sum = %d", sum(&a, &b));
    return 0;
}