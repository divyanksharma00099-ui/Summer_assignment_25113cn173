#include <stdio.h>

int main() {
    int n,arr[1000],target,found=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements for array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == target) 
            {
                printf("Pair found:(%d, %d)\n",arr[i],arr[j]);
                found = 1;
            }
        }
    }
    if (!found) 
    {
        printf("No pair found with the given sum.\n");
    }
    return 0;
}