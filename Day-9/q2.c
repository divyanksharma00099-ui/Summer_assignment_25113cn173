#include<stdio.h>
int main()
{
    int a=1,i,j,n=5;
    for ( i = 1; i <= n; i++)
    {
        for ( j = n; j >= i ; j--)
        {
            printf("%d",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    return 0;
}