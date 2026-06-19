#include<stdio.h>
int main(){
    int n,arr[1000];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements for array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int unique_size=0;
    for(int i=0;i<n;i++)
    {
        int is_duplicate=0;
        for(int j=0;j<unique_size;j++)
        {
            if(arr[i]==arr[j])
            {
                is_duplicate=1;
                break;
            }
        }
        if(!is_duplicate)
        {
            arr[unique_size]=arr[i];
            unique_size++;
        }
    }
    printf("Array after removing duplicates:\n");
    for(int i=0;i<unique_size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}