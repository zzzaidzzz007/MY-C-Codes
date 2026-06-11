#include <stdio.h>

/*A variable is a named storage location in memory used to hold data.
It acts as a container for values that can be manipulated and accessed throughout a program.*/

//data type variableName = var;


/*To print in C you have to specify the data type in the print function
int = %d
float = %f
char = %c*/

void main(){
    int ZAID = 1;
    printf("The variable is %d\n", ZAID); 

    //here i overwrite the value of the variable
    ZAID = 3;
    printf("The variable is %d\n",ZAID);

    //adding variables
    int x = 5;
    int y = 6;

    printf("%d\n", x + y);

    //or
    int sum = x + y;
    printf("%d\n", sum);

    }