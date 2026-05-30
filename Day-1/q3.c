#include<stdio.h>
int main()
{
    int a=1,b,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        a=a*n;
        n=n-1;/* code */
    }
    printf("The factorial of number is:%d",a);
    return 0;
}