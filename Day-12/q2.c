#include<stdio.h>
#include<math.h>
int armstrong(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (armstrong(a))
    {
        printf("The number is an armstrong number.\n");
    }
    else
    {
        printf("The number is not an armstrong number.\n");
    }
    return 0;
}
int armstrong(int a)
{
    int n1,n2,n3,sum=0,count=0;
    n1=a;
    n2=a;
    while (n1!=0)
    {
        n1=n1/10;
        count=count+1;
    }
    while (n2!=0)
    {
        n3=n2%10;
        sum=sum+pow(n3,count);
        n2=n2/10;
    }
    if (sum==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }           
}