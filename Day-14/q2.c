#include<stdio.h>
int main()
{
    int arr[100],n,n1,sum=0,found=0;
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("\nEnter the elements for the array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you wish to find frequency of:");
    scanf("%d",&n1);
    for (int i=0;i<n;i++)
    {
        if (arr[i]==n1)
        {
            sum++;
            found=1;
        }
    }
    printf("The number of times your number %d occured in the array is %d",n1,sum);
    if (found==0)
    printf("The number your'e lookin for doesnt exist in the array");
    return 0;
}