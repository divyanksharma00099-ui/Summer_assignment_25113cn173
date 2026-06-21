#include<stdio.h>
int main()
{
    int r,c;
    int m1[100][100];
    printf("\nEnter the number of rows for matrix:");
    scanf("%d",&r);
    printf("Enter the number of columns for matrix:");
    scanf("%d",&c);
    if (r!=c)
    {
        printf("Errro:Sum of diagonal element only exist for square matrices:");
    }
    else
    {
        printf("Enter the elements for matrix:");
        for (int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        int sum=0;
        for (int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++)
            {
                if (i==j)
                {
                    sum=sum+m1[i][j];
                }
            }
        }
        printf("The sum of the diagonal elements:%d",sum);
    }
    return 0;
}