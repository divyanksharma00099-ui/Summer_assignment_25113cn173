#include<stdio.h>
int main()
{
    int n,sum=0;
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
        sum=sum+arr[i];
    }
    printf("The sum of elements of array is %d\n",sum);
    avg=(float)sum/n;
    printf("The average of elements of array is %.3f",avg);
}