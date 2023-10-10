#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("enter the word\n");
    gets(a);
    int len=strlen(a);
    int middle_index=len/2;
    if(len%2==1)
    {
        printf("middle of word %c\n",a[middle_index]);
    }
    else
    printf("enter appropriate word");
    return 0;
}