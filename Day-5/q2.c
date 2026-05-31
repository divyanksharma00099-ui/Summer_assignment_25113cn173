#include<stdio.h>
int main()
{
    int a,b,n,n1,sum=0,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while (n!=0)
    {
        b=n%10;
        for (int i=1;i<=b;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
        fact=1;
    }
    if (sum==n1)
    printf("The number is strong:");
    else
    printf("The number isnt strong");
    return 0;
}