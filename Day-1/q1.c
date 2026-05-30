#include<stdio.h>
int main()
{
    int a=0,b,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        a=a+n;
        n=n-1;
    }
    printf("The sum of N natural number is:%d",a);
    return 0;
}