#include<stdio.h>
int main()
{
    int r,c;
    int m1[100][100];
    printf("\nEnter the number of rows for matrix:");
    scanf("%d",&r);
    printf("Enter the number of columns for matrix:");
    scanf("%d",&c);
    printf("Enter the elements for matrix:");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("The Transpose of the matrix is:\n");
    for (int i=0;i<c;i++)
    {
        for (int j=0;j<r;j++)
        {
            printf("%d ",m1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
