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
    printf("Enter the number of times to rotate right: ");
    scanf("%d",&r);
    r=r%n;
    for (int j=0;j<r;j++) 
    {
        int last=arr[n-1];
        for (int i=n-1;i>0;i--) 
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
    printf("The right rotated array is: ");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}