#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("Enter the elements for array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements in array are:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}