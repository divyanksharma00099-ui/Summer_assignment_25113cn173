#include<stdio.h>
int main(){
    int n1,n2,arr1[500],arr2[500],common[500],k=0;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            {
            if(arr1[i]==arr2[j])
            {
                int is_duplicate=0;
                for(int m=0;m<k;m++)
                {
                    if(arr1[i]==common[m])
                    {
                        is_duplicate=1;
                        break;
                    }
                }
                if(!is_duplicate)
                {
                    common[k]=arr1[i];
                    k++;
                }
                break;
            }
        }
    }
    printf("Common elements:\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",common[i]);
    }
    printf("\n");
    return 0;
}