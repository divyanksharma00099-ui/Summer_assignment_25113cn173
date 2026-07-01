#include <stdio.h>
int main() 
{
    char name[50];
    int age;
    printf("enter your name : ");
    scanf("%s",name);
    printf("enter your age : ");
    scanf("%d",&age);
    if (age>=18) 
    {
        printf("%s is eligible for voting\n",name);
    }
    else 
    {
        printf("%s is not eligible for voting\n",name);
    }
    return 0;
}