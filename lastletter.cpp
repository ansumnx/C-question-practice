#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("enter the word\n");
    gets(a);
    int len =strlen(a);
    char last_letter=a[len-1];
    printf("last lateer of %s is %c",a,last_letter);
    return 0;
}