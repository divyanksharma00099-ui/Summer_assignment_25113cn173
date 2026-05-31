#include<stdio.h>
int main()
{
    int a,b,n,t,max=1;
    int count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            for (t=1;t<=i;t++)
            {
                if (i%t==0)
                {
                    count=count+1;
                }
            }
            if (count==2)
            {
                max=i;
            }
            count=0;
        }
    }
    printf("The largest prime factor is %d",max);
    return 0;
}