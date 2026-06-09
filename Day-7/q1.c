#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n<0)
    printf("The factorial of negative number doesnt exist:");
    else
    printf("The factorial of number %d is %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if (n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}