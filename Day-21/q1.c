#include <stdio.h>
int main() 
{
    char str[100];
    int i=0,length=0;
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    while (str[i]!='\0') 
    {
        length++;
        i++;
    }
    if (length>0&&str[length-1]=='\n') 
    {
        length--;
    }
    printf("length = %d\n", length);
    return 0;
}