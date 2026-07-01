#include <stdio.h>
int main() 
{
    char str[100];
    int i,length=0,flag=1;
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    while (str[length]!='\0') 
    {
        length++;
    }
    if (length>0&&str[length-1]=='\n') 
    {
        str[length-1]='\0';
        length--;
    }
    for (i=0;i<length/2;i++) 
    {
        if (str[i]!=str[length-1-i]) 
        {
            flag=0;
            break;
        }
    }
    if (flag==1) 
    {
        printf("palindrome string\n");
    }
    else 
    {
        printf("not palindrome string\n");
    }
    return 0;
}