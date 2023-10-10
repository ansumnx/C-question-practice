#include<stdio.h>
int main()
{
    char a [23];
    puts("enter the string");
    gets(a);
    int count=0,i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("the lenght of the string is %d",count);
}