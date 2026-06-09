#include<stdio.h>
int max(int a,int b);
int main()
{
    int a,b,c;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("The maximum of two numbers %d and %d is %d",a,b,c);
    return 0;
}
int max(int a, int b)
{
    if (a>b)
    return a;
    else
    return b;
}