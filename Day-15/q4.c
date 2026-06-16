#include <stdio.h>
int main() 
{
    int arr[100],n;
    printf("\nEnter the number of elements you want in array: ");
    scanf("%d",&n);
    printf("Enter the elements for the array:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for (int i=0;i<n;i++) 
    {
        if (arr[i]!=0) 
        {
            arr[count]=arr[i];
            count++;
        }
    }
    while (count<n) 
    {
        arr[count]=0;
        count++;
    }
    printf("The array after moving zeroes to end is: ");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}