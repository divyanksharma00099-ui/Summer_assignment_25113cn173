#include<stdio.h>
int perfect(int a);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (perfect(n))
    printf("The number is perfect");
    else
    printf("The numbr isnt perfect");
}
int perfect(int a)
{
    int sum=0;
    for (int i=1;i<a;i++)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==a)
    return 1;
    else 
    return 0;
}