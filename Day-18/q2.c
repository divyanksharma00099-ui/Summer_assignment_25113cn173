#include<stdio.h>
int main(){
    int n,arr[1000],temp,min_idx;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements for array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}