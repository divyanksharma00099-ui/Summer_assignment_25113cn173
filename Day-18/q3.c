#include<stdio.h>
int main(){
    int n,arr[1000],target,low,high,mid,found=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter sorted elements for array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&target);
    low=0;
    high=n-1;
    while(low<=high)    
    {
        mid=(low+high)/2;
        if(arr[mid]==target)
        {
            printf("Element found at index: %d\n",mid);
            found=1;
            break;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(!found)
    {
        printf("Element not found\n");
    }
    return 0;
}