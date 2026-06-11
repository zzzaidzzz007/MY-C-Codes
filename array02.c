#include <stdio.h>

//this is a more effective and better way of executing an array

void main(){

    int arr[] = {85,33,98,96,55,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    

}