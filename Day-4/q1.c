
#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,c;
    printf("Enter the number upto which u wanna find fibonacci:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}