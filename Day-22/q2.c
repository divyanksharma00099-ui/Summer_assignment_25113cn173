#include <stdio.h>
int main() 
{
    char str[100];
    int i=0,count=1;
    printf("enter sentence : ");
    fgets(str,sizeof(str),stdin);
    while (str[i]!='\0') 
    {
        if (str[i]==' ') 
        {
            count++;
        }
        i++;
    }
    if (i>0&&str[i-1]=='\n') 
    {
        str[i-1]='\0';
    }
    printf("total words = %d\n",count);
    return 0;
}