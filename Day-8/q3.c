#include<stdio.h>
int main()
{
    int i,j,n=5;
    for ( i =1 ; i <= n; i++)
    {
        char c='A';
        for ( j = 0; j < i ; j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}