#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int isPrime;

    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            isPrime = 1;
        }
        
    }

    if (isPrime = 0)
    {
        printf("The number is not ptime");
    }else
    {
        printf("The number is prime");
    }
    
        
    
    return 0;
}