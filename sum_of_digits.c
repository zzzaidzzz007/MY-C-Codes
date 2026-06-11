#include<stdio.h>

int main(){
    int n,t,sum=0,remainder,ch;
    printf("ENter Number\n");
    scanf("%d", &n);
    t=n;
    while (t!=0)
    {
        remainder = t%10;
        sum = sum + remainder;
        t = t/10;
    }

    printf("Sum of digits od %d = %d", n, sum);
    
    
    return 0;
}