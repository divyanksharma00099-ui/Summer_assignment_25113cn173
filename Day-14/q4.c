#include<stdio.h>
int main()
{
    int arr[100],n,c=0;
    int count[1000000]={0};
    printf("\nEnter the number of elements you want in array:");
    scanf("%d",&n);
    printf("\nEnter the elements for the array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    printf("The duplicate in the array:");
    for (int i=0;i<1000000;i++)
    {
        if (count[i]>1)
        {
            printf("%d\n",i);
            c=1;
        }
    }
    if (c==0)
    {
        printf("No duplicates");
    }
    return 0;
}