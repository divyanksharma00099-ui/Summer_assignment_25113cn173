#include <stdio.h>
int main() 
{
    int arr[100],n,r;
    printf("\nEnter the number of elements you want in array: ");
    scanf("%d",&n);
    printf("Enter the elements for the array:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of times to rotate left: ");
    scanf("%d",&r);
    r=r%n;
    for (int j=0;j<r;j++) 
    {
        int first=arr[0];
        for (int i=0;i<n-1;i++) 
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
    }
    printf("The left rotated array is: ");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}