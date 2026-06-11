#include <stdio.h>


void table(int n){
    for (int i = 1; i<=10; i++)
    printf("%d x %d = %d\n", n, i, n*i);
}


int main(){

    int n;

    printf("Write the number: ");

    scanf("%d", &n);

    table(n);
    return 0;

    
}