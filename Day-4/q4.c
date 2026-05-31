#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,c,max,min,count=0,sum=0,n,n1,n2;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    printf("The armstrong number in the range %d and %d are:\n",min,max);
    for (i=min;i<=max;i++)
    {
        n=i;
        n1=n;
        n2=n;
        if (n==0)
        count=1;
        else
        {
            while (n!=0)
            {
                n=n/10;
                count=count+1;
            }
        }
        while (n1!=0)
        {
            c=n1%10;
            sum=sum+round(pow(c,count));
            n1=n1/10;
        }
        if (n2==sum)
        {
            printf("%d\n",sum);
        }
        count=0;
        sum=0;
    }
    return 0;
}