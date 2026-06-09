#include<stdio.h>
int reverse(int n, int rev);
int main() 
{
    int n,a,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n;
    if (n<0)
    {
        n= -n;
    }
    c=reverse(n,0);
    if (a<0)
    {
        c=-c;
    }
    printf("The reverse of %d is %d",a,c);
    return 0;
}
int reverse(int n, int rev) 
{
    if (n==0)
    return rev;
    else
    return reverse(n/10,rev*10+(n%10));
}