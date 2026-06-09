#include<stdio.h>
unsigned long long fact(int n);

int main()
{
    int n;
    unsigned long long c;
    printf("Enter the number:");
    scanf("%d", &n);
    c = fact(n);
    printf("The factorial of %d is %llu\n", n, c);
    return 0;
}
unsigned long long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}