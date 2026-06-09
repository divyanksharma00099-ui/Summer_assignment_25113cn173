#include<stdio.h>
int sum(int n);
int main() 
{
    int n,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n;
    if (n<0)
    {
        n=-n;
    }
    printf("The sum of digits of %d is %d\n",a, sum(n));
    return 0;
}

int sum(int n) 
{
    if (n==0)
    return 0;
    else
    return (n%10)+sum(n/10);
}