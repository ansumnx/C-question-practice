// coping one file to another
#include<stdio.h>
#include<stdlib.h>
main()
{
    int ab;
    FILE *a ,*b;
    a=fopen("hello.text","r");
    b=fopen("hel.text","w");
    while((ab=fgetc(a))!=EOF)
    {
        putc(ab,b);
    }
    printf("copied");
    fclose(a);
    fclose(b);
}