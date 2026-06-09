#include<stdio.h>
int add_sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    c=add_sum(a,b);
    printf("The sum of two numbers %d and %d is %d",a,b,c);
    return 0;
}
