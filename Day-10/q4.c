#include<stdio.h>
int main()
{
    int n=5,j,i;
    char c='A';
    for (i=1; i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for ( j=1; j<= 2*i-1; j++)
        {
            if (j<i)
            {
                printf("%c",c);
                c++;
            }
            if (j==i)
            {
                printf("%c",c);
            }
            if (j>i)
            {
                c--;
                printf("%c",c);
            }
        }
        c='A';
        printf("\n");
    }
    return 0;
}