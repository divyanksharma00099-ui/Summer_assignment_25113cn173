#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,n2,count=0,b,n,n1;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while (n1!=0)
    {
        n1=n1/10;
        count=count+1;
    }
    while (n!=0)
    {
        b=n%10;
        a=a+b*pow(10,count-1);
        count=count-1;
        n=n/10;
    }
    printf("The reverse of the number %d is %d ",n2,a);
    return 0;
}