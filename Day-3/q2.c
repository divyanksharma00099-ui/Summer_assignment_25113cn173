#include<stdio.h>
int main()
{
    int i,b,e,n,count=0,q,w;
    printf("Enter the number for the range:");
    scanf("%d %d",&q,&w);
    if (q>=w)
    {
        e=q;
        q=w;
        w=e;
    }
    printf("The prime number in the range are:");
    for ( ; q<=w ; q++)
    {
        for (i=1;i<=q;i++)
        {
            if (q%i==0)
            count=count+1;
        }
        if (count==2)
        {
            printf("%d\n",q);
        } 
        count=0;   
    }
    return 0;
}