#include<stdio.h>
int sumn(int n){
    if(n == 0){

        return 1;
    }

    else{
        
        return n + sumn(n-1);

    }
    
}
int main(){
    int n;
    scanf("%d", &n);
    printf("The sum of first N natural numbers:%d ", sumn(n));
    return 0;
}