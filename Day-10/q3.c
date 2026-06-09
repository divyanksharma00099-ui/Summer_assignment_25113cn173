#include<stdio.h>
int main()
{
    int n=5,j,i;
    for (i=1; i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for ( j=1; j<= 2*i-1; j++)
        {
            if (j<=i)
            printf("%d",j);
            if (j>i)
            printf("%d",2*i-j);
        }
        printf("\n");
    }
    return 0;
}