#include<stdio.h>
int main()
{
    int a=1,b,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while (a<=10)
    {
        b=a*n;
        printf("%d*%d=%d\n",n,a,b);
        a=a+1;
    }
    return 0;
}