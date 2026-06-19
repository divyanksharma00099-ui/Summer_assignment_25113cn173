#include<stdio.h>
int main(){
    int n1,n2,arr1[500],arr2[500],union_arr[1000],k=0;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
        int is_duplicate=0;
        for(int j=0;j<k;j++)
        {
            if(arr1[i]==union_arr[j])
            {
                is_duplicate=1;
                break;
            }
        }
        if(!is_duplicate)
        {
            union_arr[k]=arr1[i];
            k++;
        }
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
        int is_duplicate=0;
        for(int j=0;j<k;j++)
        {
            if(arr2[i]==union_arr[j])
            {
                is_duplicate=1;
                break;
            }
        }
        if(!is_duplicate)
        {
            union_arr[k]=arr2[i];
            k++;
        }
    }
    printf("Union of arrays:\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",union_arr[i]);
    }
    printf("\n");
    return 0;
}