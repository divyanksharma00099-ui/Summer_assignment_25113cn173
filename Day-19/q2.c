#include<stdio.h>
int main()
{
    int r,c,r1,c1;
    int m1[100][100],m2[100][100],m3[100][100];
    printf("\nEnter the number of rows for first matrix:");
    scanf("%d",&r);
    printf("Enter the number of columns for first matrix:");
    scanf("%d",&c);
    printf("Enter the elements for matrix:");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nEnter the number of rows for second matrix:");
    scanf("%d",&r1);
    printf("Enter the number of columns for second matrix:");
    scanf("%d",&c1);
    if (r != r1 || c != c1) 
    {
        printf("Error: Matrices must have the same dimensions for subtraction!");
        return 1;
    }
    printf("Enter the elements for second matrix:");
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            m3[i][j]=m1[i][j]-m2[i][j];
        }
    }
    printf("\nThe subtracted elements after joining the matrices are:\n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
