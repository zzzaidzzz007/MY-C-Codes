#include<stdio.h>
int josephus(int n,int k){
    if(n==1){
        return 0;
    }
    else
    {
        return (josephus(n-1,k)+k)%n;
    }
    
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
    printf("the safest position is %d\n", result+1);
    
    return 0;
}