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
    int max,min;
    max=arr[0];
    min=arr[0];
    for (int i=0;i<n;i++)
    {
        if (max<arr[i])
        max=arr[i];
        if (min>arr[i])
        min=arr[i];
    }
    printf("The max and min of the array are respectively: %d and %d",max,min);
    return 0;
}