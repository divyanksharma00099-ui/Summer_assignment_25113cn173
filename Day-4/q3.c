#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,count=0,sum=0,n,n1,n2;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while (n!=0)
    {
        n=n/10;
        count=count+1;
    }
    while (n1!=0)
    {
        a=n1%10;
        sum=sum+pow(a,count);
        n1=n1/10;
    }
    if (n2==sum)
    printf("The number is armstrong");
    else
    printf("The number isnt armstrong");
    return 0;
}