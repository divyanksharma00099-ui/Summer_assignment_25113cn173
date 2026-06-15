#include<stdio.h>
int main()
{
    int arr[100],n,max1,max2;
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("\nEnter the elements for the array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max1=arr[0];
    for (int i=0;i<n;i++)
    {
        if (max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
    }
    printf("The second largest element in the array is %d",max2);
    return 0;
}