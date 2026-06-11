#include <stdio.h>

void main(){

    //The while loop loops through a block of code as long as a specified condition is true

    int i = 1;

    while (i<=10)
    {

        printf("%d\n", i);
        i++;
        
        //i++ will increment until the value of i is not less than or equal to 10
    }

    printf("\n");

    int j = 10;
    while (j>=0)
    {
        printf("%d\n", j);
        j--;
        //reverse countdown
    }

    //do while loop
    int n = 6;
    do
    {
        printf("%d", n);
        n--;
    } while (n>=0);
    
    

}