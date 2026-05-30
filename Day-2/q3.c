#include<stdio.h>
int main()
{
    int a=1,b,n,n1;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while (n!=0)
    {
        b=n%10;
        a=a*b;
        n=n/10;
    }
    printf("The product of digit %d is %d",n1,a);
    return 0;
}