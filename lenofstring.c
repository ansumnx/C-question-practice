#include<string.h>
#include<stdio.h>
int main()
{
    char str[25];
    int len;
    puts("enter any string");
    gets(str);
    len = strlen(str);
    printf("the length of %s is %d",str,len);
}