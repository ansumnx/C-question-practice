#include<stdio.h>
#include<string.h>
int main()
{
    char a[45];
    int len=0;
    puts("enter your name");
    gets(a);
    len=strlen(a);
    printf("the length of string %d",len);
}