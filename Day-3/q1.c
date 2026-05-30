#include<stdio.h>
int main()
{
    int i,b,n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        count=count+1;
    }
    if (count==2)
    printf("The number %d is prime",n);
    else 
    printf("The number isn't prime");
    return 0;
}

