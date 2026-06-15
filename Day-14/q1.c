#include<stdio.h>
int main()
{
    int n,arr[100],n1,found=0;
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("Enter the elements for array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you wish to search:");
    scanf("%d",&n1);
    for (int i=0;i<n;i++)
    {
        if (arr[i]==n1)
        {
            printf("The number youre looking for is at %d index in array",i);
            found=1;
            break;
        }
    }
    if (found==0)
    printf("The number your'e looking for isnt in the array");
    return 0;
}