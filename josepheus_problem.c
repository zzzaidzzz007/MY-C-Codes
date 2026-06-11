#include<stdio.h>
int josephus(int n,int k){
    int survivor = 0;
    for (int i = 1; i <= n; i++)
    {
        survivor = (survivor+k)%i;
    }
    return survivor+1;
    
    
}
int main(){
    int n,k;
    printf("Enter the number of people: ");
    if (scanf("%d",&n)!= 1 || n<=0 )
    {
        printf("Invalid Input for n");
    }

    printf("Enter the elimination step (k): ");
    if (scanf("%d", &k) != 1 || k<=0)
    {
        printf("Invalid input for k");
    }

    int result = josephus(n,k);
    printf("the safest position is %d\n", result);
    
    return 0;
    
    return 0;
}