#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a = 2, b = 3;
    printf("Sum = %d", sum(a,b));    
    return 0;
}