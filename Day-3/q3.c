#include<stdio.h>
int main()
{
    int a,b,c,i,f;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    if (b>=a)
    {
        c=a;
        a=b;
        b=c;
    }
    for (i=1;i<=b;i++)
    {
        if (a%i==0 && b%i==0)
        {
            f=i;
        }
    }
    printf("The gcd of two number is %d",f);
    return 0;
}