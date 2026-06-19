#include<stdio.h>
int main()
{
    int n,arr[1000],sum=0,max_num=0,exp_sum,missing;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements for array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   
        if (arr[i] > max_num) 
        {
            max_num = arr[i];
        }
    }
    if (max_num == n)
    {
        printf("No missing number\n");
    } 
    else 
    {
        exp_sum = (max_num * (max_num + 1)) / 2;
        missing = exp_sum - sum;
        printf("The missing number is: %d\n", missing);
    }
    return 0;
}