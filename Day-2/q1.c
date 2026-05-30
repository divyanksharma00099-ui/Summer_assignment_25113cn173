#include<stdio.h>
int main()
{
    int a=0,b,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        b=n%10;
        a=a+b;
        n=n/10;
    }
    printf("The sum of digits is %d",a);
    return 0;
}