#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100],str2[100],temp[200];
    printf("enter first string : ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter second string : ");
    fgets(str2,sizeof(str2),stdin);
    int len1=0,len2=0;
    while (str1[len1]!='\0') 
    {
        len1++;
    }
    if (len1>0&&str1[len1-1]=='\n') 
    {
        str1[len1-1]='\0';
        len1--;
    }
    while (str2[len2]!='\0') 
    {
        len2++;
    }
    if (len2>0&&str2[len2-1]=='\n') 
    {
        str2[len2-1]='\0';
        len2--;
    }
    if (len1!=len2) 
    {
        printf("not rotation string\n");
        return 0;
    }
    strcpy(temp,str1);
    strcat(temp,str1);
    if (strstr(temp,str2)) 
    {
        printf("rotation string\n");
    }
    else 
    {
        printf("not rotation string\n");
    }
    return 0;
}