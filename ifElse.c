#include<stdio.h>

void main(){
    
    int x;
    int y;
    
    printf("Enter the numbers:");
    scanf("%d %d", &x, &y);
    
    if (x>y){
        printf("%d is greater than %d.\n", x, y);
    } else{
        printf("%d is not greater than %d.\n",x, y);
    }

    
}