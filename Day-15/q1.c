#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("\nEnter the elements for the array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reversed array is: ");
    for (int i=n-1;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}