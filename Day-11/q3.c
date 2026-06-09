#include<stdio.h>
void prime(int a);
int main()
{
    int a,i,b,n;
    printf("Enter the number to check if its prime:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int count=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count=count+1;
        }
    }
    if (count == 2)
    {
        printf("The number is prime ");
    }
    else 
    printf("The number isnt prime ");
}