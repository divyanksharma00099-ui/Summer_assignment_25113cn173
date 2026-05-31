#include<stdio.h>
int main()
{
    int a,b,sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==n)
    printf("The number is perfect");
    else
    printf("The number isnt perfect");
    return 0;
}