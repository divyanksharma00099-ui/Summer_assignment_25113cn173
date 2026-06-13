#include<stdio.h>
int main()
{
    int even=0,odd=0,n;
    float avg;
    int arr[100];
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("Enter the elements for array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("The number of even and odd elements in the array respectively are: %d and %d",even,odd);
    return 0;
}