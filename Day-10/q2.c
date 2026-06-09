#include<stdio.h>
int main()
{
    int n=5,j,i,q;
    q=n;
    for (i=1;i<=q;i++)
    {
        for (j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for (j=1;j<=2*n-1;j++)
        {
            printf("*");
        }
        n=n-1;
        printf("\n");
    }
    return 0;
    
}