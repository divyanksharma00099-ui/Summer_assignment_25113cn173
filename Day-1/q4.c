#include<stdio.h>
int main()
{
    int n,count=0,b;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count=count+1;
    }
    printf("The count digit is %d",count);
    return 0;
}