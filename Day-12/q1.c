#include<stdio.h>
int palindrome(int a)
{
    int r=0,b,n;
    n=a;
    while (n!=0)
    {
        b=n%10;
        r=r*10+b;
        n=n/10;
    }
    if (r==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (palindrome(a))
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
