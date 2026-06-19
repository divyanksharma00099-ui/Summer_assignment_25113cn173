#include <stdio.h>

int main() 
{
    int n, arr[1000],max_element=0,max_count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements for array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }
        if (count > max_count) 
        {
            max_count = count;
            max_element = arr[i];
        }
    }
    printf("The maximum frequency element is: %d\n",max_element);
    return 0;
}