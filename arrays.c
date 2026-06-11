#include<stdio.h>

//Arrays are used to store multiple values in a single variable

int main(){

    //specify the name of the array followed by square brackets [].

    int myNums[] ={25,77,36,88};

    //To access an array element, refer to its index number

    printf("%d\n", myNums[0]); //Array indexes start with 0

    //loop through an array 
    int i;
    for (i=0; i < 4; i++)
    {
        printf("%d,",myNums[i]);
    }

    printf("\n");

    //you can check the size of the array by "sizeof" function

    printf("The size is %d\n", sizeof(myNums)); //the size is 16 bytes

    //to find the actual length of an array:-
    printf("The length is %d", sizeof(myNums)/sizeof(myNums[0]));
    
    return 0;

     //you can set an array size by num[i]
}